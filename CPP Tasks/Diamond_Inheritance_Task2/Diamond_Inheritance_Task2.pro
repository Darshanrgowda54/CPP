TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cngengine.cpp \
        engine.cpp \
        hybridengine.cpp \
        main.cpp \
        petrolengine.cpp

HEADERS += \
    cngengine.h \
    engine.h \
    hybridengine.h \
    petrolengine.h
