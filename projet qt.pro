QT       +=sql
QT +=charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../qrcodegen.cpp \
    connection.cpp \
    main.cpp \
    notification.cpp \
    secondwindow.cpp \
    secondwindow.cpp \
    stock.cpp

HEADERS += \
    ../qrcodegen.hpp \
    connection.h \
    notification.h \
    secondwindow.h \
    stock.h

FORMS += \
    secondwindow.ui

LIBS += -lshell32 -luser32

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
