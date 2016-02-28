#-------------------------------------------------
#
# Project created by QtCreator 2016-02-28T06:32:20
#
#-------------------------------------------------

QT += core gui
QT += multimediawidgets
QT += network
QT += webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testwifibot
TEMPLATE = app


SOURCES += main.cpp\
        wifibot.cpp \
    boutondirectionnel.cpp \
    cameravid.cpp \
    fenetreoption.cpp \
    boutoncamera.cpp \
    trame.cpp \
    clienttcp.cpp

HEADERS  += wifibot.h \
    boutondirectionnel.h \
    cameravid.h \
    fenetreoption.h \
    boutoncamera.h \
    trame.h \
    clienttcp.h

FORMS    += wifibot.ui \
    fenetreoption.ui

RESOURCES += \
    resources.qrc
