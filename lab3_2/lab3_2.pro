TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    customer.cpp

HEADERS += \
    customer.h \
    basictypes.h \
    property.h

INCLUDEPATH += /usr/include/boost

LIBS += -L/usr/include/boost -lboost_system
LIBS += -L/usr/include/boost  -lboost_chrono
LIBS += -L/usr/include/boost  -lboost_thread
LIBS += -L/usr/include/boost  -lboost_timer
