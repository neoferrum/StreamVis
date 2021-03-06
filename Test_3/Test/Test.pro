#-------------------------------------------------
#
# Project created by QtCreator 2015-02-22T02:48:41
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app

LIBS += -L/usr/local/lib -lGLU

SOURCES += main.cpp\
        widget.cpp \
    draw.cpp \
    field.cpp \
    functions.cpp

HEADERS  += widget.h \
    draw.h \
    field.h \
    functions.h

FORMS    += widget.ui
