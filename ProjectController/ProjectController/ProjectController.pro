#-------------------------------------------------
#
# Project created by QtCreator 2015-09-29T15:33:23
#
#-------------------------------------------------

QT       += core gui\
            serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjectController
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialdialog.cpp

HEADERS  += mainwindow.h \
    serialdialog.h

FORMS    += mainwindow.ui \
    serialdialog.ui

RESOURCES += \
    res.qrc
