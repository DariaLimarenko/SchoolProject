cmake_minimum_required(VERSION 3.10)

project(SchoolApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(school_app
    main.cpp
    Person.cpp
    Diary.cpp
    Teacher.cpp
    Student.cpp
    School.cpp
)
