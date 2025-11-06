cmake_minimum_required(VERSION 3.10)

project(bigint)

add_executable(${PROJECT_NAME}
        src/Bigint.cpp
        src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE /src)