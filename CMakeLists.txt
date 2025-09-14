cmake_minimum_required(VERSION 3.12)
project(PalindromChecker)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)
include(GoogleTest)

# Добавление исполняемого файла
add_executable(palindrom_checker
    src/main.cpp
    src/palindrom.cpp
    src/palindrom.h
)

add_executable(test_palindrom
    test/test_palindrom.cpp
    src/palindrom.cpp
    src/palindrom.h
)

# Связывание тестов с Google Test
target_link_libraries(test_palindrom GTest::GTest GTest::Main)

# Добавление тестов в CTest
gtest_discover_tests(test_palindrom)

# Настройка компилятора
target_compile_features(palindrom_checker PRIVATE cxx_std_14)
target_compile_options(palindrom_checker PRIVATE -Wall -Wextra -Wpedantic)
target_compile_features(test_palindrom PRIVATE cxx_std_14)
target_compile_options(test_palindrom PRIVATE -Wall -Wextra -Wpedantic)