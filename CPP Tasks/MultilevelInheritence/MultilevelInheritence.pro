TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        basicphone.cpp \
        main.cpp \
        mobilephone.cpp \
        smartphone.cpp

HEADERS += \
    basicphone.h \
    mobilephone.h \
    smartphone.h
