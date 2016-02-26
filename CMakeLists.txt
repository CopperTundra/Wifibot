cmake_minimum_required(VERSION 3.3)
project(Wifibot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    clienttcp.cpp
    clienttcp.h
    connect.cpp
    connect.h
    main.cpp
    mainwindow.cpp
    mainwindow.h
    wifibot.cpp
    wifibot.h)

add_executable(Wifibot ${SOURCE_FILES})