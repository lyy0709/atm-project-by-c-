#-------------------------------------------------
#
# project called bank by c++
# project created by 陆阳勇
# Project created by QtCreator 2022-04-30T21:58:21
#
#-------------------------------------------------

QT       += core gui
RC_ICONS=001.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bank
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    account.cpp \
    Chaxun.cpp \
    Chuanjian.cpp \
    Cunkuan.cpp \
    data.cpp \
    Jisuan.cpp \
    main.cpp \
    Qukuan.cpp \
    Signin.cpp \
    Wanji.cpp \
    Xiugaimm.cpp \
    Zhuce.cpp \
    Zhucexx.cpp \
    dialog.cpp \
    Guanli.cpp \
    File.cpp

HEADERS += \
    account.h \
    accountinfo.h \
    Chaxun.h \
    Chuanjian.h \
    Cunkuan.h \
    data.h \
    Jisuan.h \
    Qukuan.h \
    Signin.h \
    Wanji.h \
    Xiugaimm.h \
    Zhuce.h \
    Zhucexx.h \
    dialog.h \
    Guanli.h \
    File.h

FORMS += \
    Zhuce.ui \
    Wanji.ui \
    Signin.ui \
    Zhucexx.ui \
    Chuanjian.ui \
    Cunkuan.ui \
    Qukuan.ui \
    Chaxun.ui \
    Jisuan.ui \
    Xiugaimm.ui \
    dialog.ui \
    Guanli.ui \
    File.ui

RESOURCES += \
    image.qrc
