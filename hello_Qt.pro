
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    mainwindow.cpp \
    homepage.cpp \
    administorpage.cpp \
    custompage.cpp \
    control_adm.cpp \
    control_custom.cpp \
    borrow_book.cpp \
    return_book.cpp \
    delete_book.cpp \
    through_allbook.cpp\
    Control.cpp\
    Date.cpp \
    account.cpp \
    add_book.cpp

FORMS += \
    homepage.ui \
    mainwindow.ui \
    custompage.ui \
    administorpage.ui \
    control_adm.ui \
    control_custom.ui \
    borrow_book.ui \
    return_book.ui \
    delete_book.ui \
    through_allbook.ui\
    add_book.ui

HEADERS += \
    administorpage.h \
    homepage.h \
    mainwindow.h \
    custompage.h \
    control_adm.h \
    control_custom.h \
    borrow_book.h \
    return_book.h \
    delete_book.h \
    through_allbook.h\
    date.h \
    schedule.h \
    Control.h\
    Book.h \
    account.h \
    add_book.h


RESOURCES += \
    img.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target




