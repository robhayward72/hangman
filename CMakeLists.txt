cmake_minimum_required(VERSION 3.10)
project (hangman LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(
    hangman
    main.cpp
    logic.cpp
    graphics.cpp
)
file(COPY Dictionary.txt DESTINATION "${CMAKE_BINARY_DIR}")

