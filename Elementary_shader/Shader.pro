#-------------------------------------------------
#
# Project created by QtCreator 2015-03-12T16:14:31
#
#-------------------------------------------------

QT += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shader
TEMPLATE = app


SOURCES += main.cpp\
           widget.cpp \
           glwidget.cpp

HEADERS  += widget.h \
    glwidget.h \
    glutils.h

FORMS    += widget.ui

DISTFILES +=

RESOURCES += \
    shaders/shaders.qrc
