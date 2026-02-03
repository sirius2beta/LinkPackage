#include "bridge.h"
#include "linkmanager.h"
#include <QtCore/qapplicationstatic.h>
#include <QtCore/QTimer>
#include <QtQml/qqml.h>
#include <QLoggingCategory>

Q_LOGGING_CATEGORY(BridgeLog, "hypex.comms.bridge")

Q_APPLICATION_STATIC(Bridge, _bridgeInstance);

Bridge::Bridge(QObject *parent)
    : QObject{parent},
    _primaryUdpLink(nullptr),
    _secondaryUdpLink(nullptr),
    _pixhawkSerialLink(nullptr)
{}

Bridge* Bridge::instance()
{
    return _bridgeInstance;
}

void Bridge::init()
{

    connect(MAVLinkProtocol::instance(), &MAVLinkProtocol::messageReceived, this, &Bridge::mavlinkMessageReceived);
}

void Bridge::setupLinks(LinkInterface* primaryUdpLink, LinkInterface* secondaryUdpLink, LinkInterface* pixhawkSerialLink)
{

    SharedLinkInterfacePtr sharedLink = LinkManager::instance()->sharedLinkInterfacePointerForLink(primaryUdpLink);
    if (!sharedLink) {
        qCDebug(BridgeLog) << "_addLink stale link" << (void*)primaryUdpLink;
        return;
    }
    _primaryUdpLink = primaryUdpLink;
    _primaryUdpLinkInfo.link = sharedLink;
    _primaryUdpLinkInfo.heartbeatElapsedTimer.start();
    _secondaryUdpLink = secondaryUdpLink;
    _pixhawkSerialLink = pixhawkSerialLink;
}

void Bridge::mavlinkMessageReceived(LinkInterface *link, const mavlink_message_t &message)
{
    // Radio status messages come from Sik Radios directly. It doesn't indicate there is any life on the other end.
    if (message.msgid == MAVLINK_MSG_ID_RADIO_STATUS) {
        return;
    }

    if(link == _primaryUdpLink){
        _primaryUdpLinkInfo.heartbeatElapsedTimer.restart();
        if(_primaryUdpLinkInfo.commLost){
            _primaryUdpLinkInfo.commLost = false;
            _updatePrimaryLink();
        }
    }else if(link == _secondaryUdpLink){
        _secondaryUdpLinkInfo.heartbeatElapsedTimer.restart();
        if(_secondaryUdpLinkInfo.commLost){
            _secondaryUdpLinkInfo.commLost = false;
            _updatePrimaryLink();
        }
    }
}

void Bridge::_addLink(LinkInterface *link)
{

}

SharedLinkInterfacePtr Bridge::_bestActivePrimaryLink()
{

    if(!_primaryUdpLinkInfo.commLost){
        return _primaryUdpLinkInfo.link;
    }else if(!_secondaryUdpLinkInfo.commLost){
        return _secondaryUdpLinkInfo.link;
    }



    // Last possible choice is a high latency link


    return {};
}

bool Bridge::_updatePrimaryLink()
{
    SharedLinkInterfacePtr primaryLink = _primaryLink.lock();

    if(primaryLink.get() == _primaryUdpLink){
        if(!_primaryUdpLinkInfo.commLost){
            return false;
        }else{
            if(!_secondaryUdpLinkInfo.commLost){
                _primaryLink = _secondaryUdpLinkInfo.link;
                return true;
            }else{
                return false;
            }
        }
        return false;
    }else{
        if(!_secondaryUdpLinkInfo.commLost){
            if(!_primaryUdpLinkInfo.commLost){
                _primaryLink = _primaryUdpLinkInfo.link;
                return true;
            }else{
                return false;
            }
        }else{
            if(!_primaryUdpLinkInfo.commLost){
                _primaryLink = _primaryUdpLinkInfo.link;
                return true;
            }else{
                //need backup
                _primaryLink = _primaryUdpLinkInfo.link;
                return true;

            }

        }
    }
}

void Bridge::_commLostCheck()
{

    const int heartbeatTimeout = _heartbeatMaxElpasedMSecs;

    bool linkStatusChange = false;

    if (!_primaryUdpLinkInfo.commLost &&  (_primaryUdpLinkInfo.heartbeatElapsedTimer.elapsed() > heartbeatTimeout)) {
        _primaryUdpLinkInfo.commLost = true;
        linkStatusChange = true;

        // Notify the user of individual link communication loss
        const bool isPrimaryLink = _primaryUdpLinkInfo.link.get() == _primaryLink.lock().get();
    }
    if (!_secondaryUdpLinkInfo.commLost &&  (_secondaryUdpLinkInfo.heartbeatElapsedTimer.elapsed() > heartbeatTimeout)) {
        _secondaryUdpLinkInfo.commLost = true;
        linkStatusChange = true;

        // Notify the user of individual link communication loss
        const bool isPrimaryLink = _secondaryUdpLinkInfo.link.get() == _primaryLink.lock().get();
    }


    if (_updatePrimaryLink()) {
        // change primary link
    }

}
