TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        app.cpp \
        instagram.cpp \
        main.cpp \
        telegram.cpp \
        whatsapp.cpp

HEADERS += \
    app.h \
    instagram.h \
    telegram.h \
    whatsapp.h
