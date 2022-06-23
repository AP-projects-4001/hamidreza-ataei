QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    change_photo.cpp \
    forget_pas.cpp \
    main.cpp \
    login.cpp \
    management.cpp \
    sign_up.cpp

HEADERS += \
    change_photo.h \
    forget_pas.h \
    login.h \
    management.h \
    sign_up.h

FORMS += \
    change_photo.ui \
    forget_pas.ui \
    login.ui \
    management.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
