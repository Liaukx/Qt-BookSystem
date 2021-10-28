cmake_minimum_required(VERSION 3.19)
project(hello_Qt)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hello_Qt
        account.cpp
        account.h
        add_book.cpp
        add_book.h
        administor_ui.cpp
        administor_ui.h
        administorpage.cpp
        administorpage.h
        Book.cpp
        Book.h
        book_system.h
        borrow_book.cpp
        borrow_book.h
        Control.cpp
        Control.h
        control_adm.cpp
        control_adm.h
        control_custom.cpp
        control_custom.h
        custompage.cpp
        custompage.h
        date.cpp
        date.h
        delete_book.cpp
        delete_book.h
        homepage.cpp
        homepage.h
        Load.cpp
        Load.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        new_userpage.cpp
        new_userpage.h
        query_book.cpp
        query_book.h
        return_book.cpp
        return_book.h
        schedule.h
        through_allbook.cpp
        through_allbook.h
        ui_hompage.cpp)
