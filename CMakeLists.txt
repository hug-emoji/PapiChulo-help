cmake_minimum_required(VERSION 3.22)
project(movies LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    movies
    main.cpp
    Movie.cpp
    Movies.cpp
)

