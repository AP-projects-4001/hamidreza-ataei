QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    change_information.cpp \
    change_photo.cpp \
    create_project.cpp \
    forget_pas.cpp \
    main.cpp \
    login.cpp \
    management.cpp \
    sign_up.cpp

HEADERS += \
    change_information.h \
    change_photo.h \
    create_project.h \
    forget_pas.h \
    login.h \
    management.h \
    sign_up.h

FORMS += \
    change_information.ui \
    change_photo.ui \
    create_project.ui \
    forget_pas.ui \
    login.ui \
    management.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
