#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T18:54:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project150
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    classsearch.cpp \
    course.cpp \
    createuser.cpp \
    filter.cpp \
    Loadsave.cpp \
    login.cpp \
    profile.cpp \
    Student.cpp

HEADERS  += mainwindow.h \
    classsearch.h \
    course.h \
    createuser.h \
    filter.h \
    json.hpp \
    library.h \
    loadsave.h \
    login.h \
    profile.h \
    Student.h \
    tree.h

FORMS    += mainwindow.ui \
    classsearch.ui \
    createuser.ui \
    login.ui \
    profile.ui

DISTFILES += \
    project150.pro.user
