QT       += core gui
QT += sql
QT += core gui sql
TARGET = rendu.1009
CONFIG += console
QT += widgets printsupport

QT += charts

QT += serialport
CONFIG += c++11
QT += serialport sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Mainwindow.cpp \
    arduino.cpp \
    client.cpp \
    connexion.cpp \
    main.cpp

HEADERS += \
    Mainwindow.h \
    arduino.h \
    client.h \
    connexion.h

FORMS += \
    Mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
