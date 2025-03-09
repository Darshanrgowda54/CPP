TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CsvFile.cpp \
        FileOperation.cpp \
        Student.cpp \
        StudentManagement.cpp \
        TextFile.cpp \
        main.cpp

HEADERS += \
    CsvFile.h \
    FileOperation.h \
    Student.h \
    StudentManagement.h \
    TextFile.h
