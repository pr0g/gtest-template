cmake_minimum_required(VERSION 3.8)

project(gtest-app VERSION 0.0.1 LANGUAGES CXX)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main)