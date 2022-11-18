TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    functions.cpp \
    globals.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    functions.h \
    globals.h

