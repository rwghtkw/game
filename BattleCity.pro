#-------------------------------------------------
#
# Project created by QtCreator 2015-09-22T19:04:16
#
#-------------------------------------------------

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BattleCity
TEMPLATE = app


SOURCES += main.cpp \
    MyRect.cpp \
    Bullet.cpp \
    Enemy.cpp \
    One.cpp \
    Block.cpp

HEADERS  += \
    MyRect.h \
    Bullet.h \
    Enemy.h \
    One.h \
    Block.h

RESOURCES += \
    resources.qrc
