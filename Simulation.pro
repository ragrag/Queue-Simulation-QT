#-------------------------------------------------
#
# Project created by QtCreator 2018-10-27T00:10:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Simulation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    System.cpp \
    Result.cpp \
    task.cpp \
    runwindow.cpp \

HEADERS  += mainwindow.h \
    System.h \
    Result.h \
    task.h \
    runwindow.h \

FORMS    += mainwindow.ui \
    runwindow.ui
