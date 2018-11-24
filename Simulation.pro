#-------------------------------------------------
#
# Project created by QtCreator 2018-10-27T00:10:33
#
#-------------------------------------------------

#include (F:\qtmods\nightcharts-master\nightcharts.pri)
include (C:\Qwt-6.1.3\features\qwt.prf)
#include (C:\qwt-6.1.3\qwtbuild.pri)

QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Simulation
TEMPLATE = app

CONFIG += qwt
SOURCES += main.cpp\
        mainwindow.cpp \
    System.cpp \
    Result.cpp \
    task.cpp \
    runwindow.cpp \
    probabilitytable.cpp \
    chartwindow.cpp \
    histogramplot.cpp

HEADERS  += mainwindow.h \
    System.h \
    Result.h \
    task.h \
    runwindow.h \
    probabilitytable.h \
    chartwindow.h \
    histogramplot.h

FORMS    += mainwindow.ui \
    runwindow.ui \
    probabilitytable.ui \
    chartwindow.ui
