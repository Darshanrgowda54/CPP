TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CsvFile.cpp \
        Wifi.cpp \
        WifiManager.cpp \
        main.cpp

HEADERS += \
    CsvFile.h \
    Wifi.h \
    WifiManager.h
