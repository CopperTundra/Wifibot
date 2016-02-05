#-------------------------------------------------
#
# Project created by QtCreator 2016-02-05T13:15:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Wifibot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    winsock2.h

FORMS    += mainwindow.ui
