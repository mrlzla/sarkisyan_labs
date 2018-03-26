TEMPLATE = app

QT       += core
QT += widgets

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib -lopencv_cudabgsegm -lopencv_cudaobjdetect -lopencv_cudastereo -lopencv_dnn -lopencv_ml -lopencv_shape -lopencv_stitching -lopencv_cudafeatures2d -lopencv_superres -lopencv_cudacodec -lopencv_videostab -lopencv_cudaoptflow -lopencv_cudalegacy -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_photo -lopencv_imgcodecs -lopencv_cudawarping -lopencv_cudaimgproc -lopencv_cudafilters -lopencv_video -lopencv_objdetect -lopencv_imgproc -lopencv_flann -lopencv_cudaarithm -lopencv_core -lopencv_cudev


CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    line.cpp \
    polygon.cpp \
    circle.cpp \
    ellipse.cpp \
    rectangle.cpp \
    world.cpp

HEADERS += \
    ielement.h \
    basictypes.h \
    line.h \
    polygon.h \
    circle.h \
    ellipse.h \
    rectangle.h \
    world.h
