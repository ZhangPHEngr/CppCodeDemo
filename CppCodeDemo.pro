TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    STL/vectordemo.cpp \
    sizeof_demo.cpp \
    refer_demo.cpp \
    static_demo.cpp \
    struct_demo.cpp \
    template_demo.cpp \
    File/ofs_demo.cpp \
    Math/div_demo.cpp \
    Class/class_demo.cpp \
    lambdademo.cpp \
    pthread_demo.cpp

HEADERS += \
    STL/vectordemo.h \
    refer_demo.h \
    sizeof_demo.h \
    static_demo.h \
    struct_demo.h \
    template_demo.h \
    div_demo.h \
    Math/div_demo.h \
    File/ofs_demo.h \
    class_demo.h \
    Class/class_demo.h \
    all.h
