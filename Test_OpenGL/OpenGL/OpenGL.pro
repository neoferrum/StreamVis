#-------------------------------------------------
#
# Project created by QtCreator 2015-02-17T17:07:18
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenGL
TEMPLATE = app


SOURCES += main.cpp\
    scenegl.cpp

HEADERS  += \
    scenegl.h

LIBS += -L/usr/local/lib -lGLU


