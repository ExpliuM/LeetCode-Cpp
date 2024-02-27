cmake_minimum_required(VERSION 3.25)

include(CheckCXXCompilerFlag)

# Tests
project(tests)
enable_language(C CXX)

# enable_testing()
find_package(GTest REQUIRED)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

file(GLOB_RECURSE TEST_FILES "*.cc" "*.cpp" "*.hpp")
list(FILTER TEST_FILES EXCLUDE REGEX "(build)")
list(FILTER TEST_FILES EXCLUDE REGEX "(build|main\.cpp)")
# message(("TEST_FILES:${TEST_FILES}"))

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()

add_executable(tests ${TEST_FILES})
target_link_libraries(tests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)