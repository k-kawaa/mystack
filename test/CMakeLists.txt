cmake_minimum_required(VERSION 3.8)

project(mystack_debug C)

add_executable(test test.c)
target_include_directories(test PRIVATE ../)

file(GLOB Device_files ../Device/*.c)
file(GLOB Ethernet_files ../Ethernet/*.c)

add_library(Device STATIC ${Device_files})
add_library(Ethernet STATIC ${Ethernet_files})

target_link_libraries(test Device)
target_link_libraries(test Ethernet)
