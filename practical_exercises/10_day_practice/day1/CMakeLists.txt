cmake_minimum_required(VERSION 3.10)
project("day 1")

add_executable(print 打印练习.cpp)
add_executable(union 联合体学习.cpp)
add_executable(is_leap_year 是否闰年.cpp)
add_executable(cpp_comment 注释.cpp)

option(COMMENT "Build comment in 注释.cpp" OFF)
if (COMMENT)
    # add_definitions(-DCOMMENT)
    target_compile_definitions(cpp_comment PRIVATE COMMENT=1)
endif(COMMENT)
