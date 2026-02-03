#ifndef BRIDGE_H
#define BRIDGE_H

#include "linkinterface.h"
#include "linkinterface.h"
#include "MAVLinkLib.h"
#include "mavlinkprotocol.h"

#include <QObject>
#include <QtCore/QElapsedTimer>


class Bridge : public QObject
{
    Q_OBJECT
public:
    explicit Bridge(QObject *parent = nullptr);

    static Bridge *instance();
signals:


protected slots:
    void mavlinkMessageReceived(LinkInterface *link, const mavlink_message_t &message);
    void init();
    void setupLinks(LinkInterface* primaryUdpLink, LinkInterface* secondaryUdpLink, LinkInterface* pixhawkSerialLink);




private slots:
    void _commLostCheck();

private:
    static constexpr int _commLostCheckTimeoutMSecs = 1000; ///< Check for comm lost once a second
    static constexpr int _heartbeatMaxElpasedMSecs = 3500;  ///< No heartbeat for longer than this indicates comm loss

    void _addLink(LinkInterface *link);
    bool _updatePrimaryLink();
    SharedLinkInterfacePtr _bestActivePrimaryLink();

    WeakLinkInterfacePtr _primaryLink;

    LinkInterface* _primaryUdpLink;
    LinkInterface* _secondaryUdpLink;
    LinkInterface* _pixhawkSerialLink;
    struct LinkInfo_t {
        SharedLinkInterfacePtr link;
        bool commLost = false;
        QElapsedTimer heartbeatElapsedTimer;
    };
    LinkInfo_t _primaryUdpLinkInfo;
    LinkInfo_t _secondaryUdpLinkInfo;
    LinkInfo_t _pixhawkSerialLinkInfo;
};

#endif // BRIDGE_H
