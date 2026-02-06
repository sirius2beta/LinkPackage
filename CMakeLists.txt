cmake_minimum_required(VERSION 3.16)

project(LinkPackage LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core SerialPort Network)

add_executable(${CMAKE_PROJECT_NAME}
  main.cpp
  LinkPackage.qrc
  bridge.h bridge.cpp
  linkconfiguration.h linkconfiguration.cpp
)


target_sources(${CMAKE_PROJECT_NAME}
    PRIVATE
    linkconfiguration.h linkconfiguration.cpp
    linkinterface.h linkinterface.cpp
    mavlinkprotocol.h
    mavlinkprotocol.cpp
    MAVLinkLib.h

    linkmanager.h linkmanager.cpp
    SerialLink.h SerialLink.cc
    UDPLink.h UDPLink.cc
    UdpIODevice.cc UdpIODevice.h
    QGCSerialPortInfo.h QGCSerialPortInfo.cc
    JsonHelper.h JsonHelper.cc

)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::SerialPort Qt6::Network)

include(GNUInstallDirs)
install(TARGETS ${CMAKE_PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)


install(TARGETS ${CMAKE_PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    mavlink/
    mavlink/hypex
)
