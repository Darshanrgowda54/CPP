TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        auditorium.cpp \
        auditorium_manager.cpp \
        calendar.cpp \
        date.cpp \
        main.cpp \
        month.cpp \
        year.cpp

HEADERS += \
    auditorium.h \
    auditorium_manager.h \
    calendar.h \
    date.h \
    month.h \
    year.h
