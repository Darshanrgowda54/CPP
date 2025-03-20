TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bike.cpp \
        car.cpp \
        fileoperation.cpp \
        main.cpp \
        paymentmethod.cpp \
        rentaldetails.cpp \
        vehicle.cpp \
        vehiclemanager.cpp

HEADERS += \
    bike.h \
    car.h \
    fileoperation.h \
    paymentmethod.h \
    rentaldetails.h \
    vehicle.h \
    vehiclemanager.h
