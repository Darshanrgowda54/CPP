TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        car.cpp \
        electriccar.cpp \
        hybridcar.cpp \
        main.cpp \
        vehicle.cpp

HEADERS += \
    car.h \
    electriccar.h \
    hybridcar.h \
    vehicle.h
