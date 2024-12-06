QT       += core gui printsupport
QT += multimedia
QT += sql
QT += core gui charts
QT += core gui widgets  # Ajoutez 'widgets' si nécessaire
include("C:\Users\mehdi\Downloads\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator.pri")
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calendrierconge.cpp \
    congesmanager.cpp \
    connexion.cpp \
    login.cpp \
    equipement.cpp\
    main.cpp \
    personel.cpp \
    secondwindow.cpp

HEADERS += \
    calendrierconge.h \
    congesmanager.h \
    connexion.h \
    login.h \
    equipement.h\
    personel.h \
    secondwindow.h

FORMS += \
    login.ui \
    secondwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
