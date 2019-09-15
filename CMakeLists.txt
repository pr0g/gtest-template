cmake_minimum_required(VERSION 3.13)
project(
    gtest-template LANGUAGES CXX)
find_package(
    GTest REQUIRED)
add_executable(
    ${PROJECT_NAME} main.cpp)
target_compile_features(
    ${PROJECT_NAME} PRIVATE cxx_std_11)
set_target_properties(
    ${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO)
target_link_libraries(
    ${PROJECT_NAME} PRIVATE GTest::GTest GTest::Main)
