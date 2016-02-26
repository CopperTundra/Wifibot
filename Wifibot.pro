#-------------------------------------------------
#
# Project created by QtCreator 2016-02-05T13:15:36
#
#-------------------------------------------------

QT       += core gui
QT += multimediawidgets
QT += network
QT += webkit webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Wifibot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clienttcp.cpp

HEADERS  += mainwindow.h \
    clienttcp.h

FORMS    += mainwindow.ui
