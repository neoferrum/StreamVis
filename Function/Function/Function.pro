#-------------------------------------------------
#
# Project created by QtCreator 2015-02-26T14:21:15
#
#-------------------------------------------------

QT       += core gui opengl

LIBS += -L/usr/local/lib -lGLU


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Function
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    drawwidget.cpp

HEADERS  += widget.h \
    drawwidget.h

FORMS    += widget.ui
