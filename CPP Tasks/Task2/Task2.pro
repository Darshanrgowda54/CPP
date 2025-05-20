TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


SOURCES += \
        batterymanager.cpp \
        main.cpp \
        soundmanager.cpp

HEADERS += \
    batterymanager.h \
    soundmanager.h
