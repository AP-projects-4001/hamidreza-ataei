QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    add_member.cpp \
    add_task.cpp \
    assign_task.cpp \
    change_information.cpp \
    change_photo.cpp \
    completed_task.cpp \
    create_project.cpp \
    doing_my_task.cpp \
    forget_pas.cpp \
    main.cpp \
    login.cpp \
    management.cpp \
    message.cpp \
    my_info.cpp \
    overall_status.cpp \
    project_window_1.cpp \
    project_window_2.cpp \
    project_window_3.cpp \
    project_window_4.cpp \
    remove_task.cpp \
    select_user.cpp \
    sign_up.cpp \
    worker.cpp \
    worker_message.cpp \
    worker_overall.cpp \
    worker_window_1.cpp \
    worker_window_2.cpp \
    worker_window_3.cpp \
    worker_window_4.cpp

HEADERS += \
    add_member.h \
    add_task.h \
    assign_task.h \
    change_information.h \
    change_photo.h \
    completed_task.h \
    create_project.h \
    doing_my_task.h \
    forget_pas.h \
    login.h \
    management.h \
    message.h \
    my_info.h \
    overall_status.h \
    project_window_1.h \
    project_window_2.h \
    project_window_3.h \
    project_window_4.h \
    remove_task.h \
    select_user.h \
    sign_up.h \
    worker.h \
    worker_message.h \
    worker_overall.h \
    worker_window_1.h \
    worker_window_2.h \
    worker_window_3.h \
    worker_window_4.h

FORMS += \
    add_member.ui \
    add_task.ui \
    assign_task.ui \
    change_information.ui \
    change_photo.ui \
    completed_task.ui \
    create_project.ui \
    doing_my_task.ui \
    forget_pas.ui \
    login.ui \
    management.ui \
    message.ui \
    my_info.ui \
    overall_status.ui \
    project_window_1.ui \
    project_window_2.ui \
    project_window_3.ui \
    project_window_4.ui \
    remove_task.ui \
    select_user.ui \
    sign_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
