TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        accelerator.cpp \
        break.cpp \
        car.cpp \
        engine.cpp \
        main.cpp \
        wheel.cpp

HEADERS += \
    accelerator.h \
    break.h \
    car.h \
    engine.h \
    wheel.h
