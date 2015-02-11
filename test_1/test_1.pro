TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Field.cpp \
    Point.cpp \
    Segment.cpp \
    stdafx.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Field.h \
    Point.h \
    Segment.h \
    stdafx.h

