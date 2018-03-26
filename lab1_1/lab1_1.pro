TEMPLATE = app

SOURCES += \
        main.cpp \
    book.cpp \
    booklistservice.cpp

HEADERS += \
    book.h \
    booklistservice.h \
    repository.h \
    basictypes.h

CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
