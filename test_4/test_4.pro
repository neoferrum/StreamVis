#-------------------------------------------------
#
# Project created by QtCreator 2015-05-18T11:27:49
#
#-------------------------------------------------

QT       += core gui opengl widgets

TARGET = test_4

TEMPLATE = app


SOURCES += main.cpp \
    glwidget.cpp \
    widget.cpp

HEADERS += \
    glwidget.h \
    widget.h

RESOURCES += \
    shaders/shaders.qrc

FORMS += \
    widget.ui
