TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        FileOperation.cpp \
        Student.cpp \
        StudentManagement.cpp \
        TextFile.cpp \
        main.cpp

HEADERS += \
    FileOperation.h \
    Student.h \
    StudentManagement.h \
    TextFile.h
