#-------------------------------------------------
#
# Project created by QtCreator 2015-11-10T20:19:31
#
#-------------------------------------------------

QT       += core gui  multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TANKS
TEMPLATE = app


SOURCES += main.cpp\
        mainview.cpp \
    player.cpp \
    block.cpp \
    bullet.cpp \
    levels.cpp \
    enemy.cpp

HEADERS  += mainview.h \
    player.h \
    block.h \
    bullet.h \
    levels.h \
    enemy.h

RESOURCES += \
    res.qrc
