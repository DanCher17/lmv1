#-------------------------------------------------
#
# Project created by QtCreator 2017-09-11T17:23:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lmv1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    counters.cpp \
    rooms.cpp

HEADERS  += mainwindow.h \
    counters.h \
    rooms.h

FORMS    += mainwindow.ui \
    counters.ui \
    rooms.ui

RESOURCES += \
    images.qrc
