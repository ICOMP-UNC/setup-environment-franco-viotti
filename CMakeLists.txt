cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Define a project
project(
    "FirstProjectInCMake" # Project name
    VERSION 1.0.0 # Project version
    DESCRIPTION "This is my first project in CMake" # Project description
    LANGUAGES C # Project languages
)

# Enable testing and add tests
include(CTest)

# Define the C standard
set(CMAKE_C_STANDARD 17)

# Define the location of the libraries to be used
include_directories(include)

# To automate the download of external dependencies (allows you to download repositories)
include(FetchContent)

# Set the URL of the Unity repository
set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

# Enable debug
set(FETCHCONTENT_QUIET ON)

# FetchContent_Declare
FetchContent_Declare(
    Unity
    GIT_REPOSITORY ${UNITY_GIT_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
    UPDATE_COMMAND "" # No se actualiza
)

# Makes sure dependencies are downloaded
FetchContent_MakeAvailable(Unity)

# Defines the location of the source codes
# the 'file' function is used, with the disadvantage that all .c files are included
file(GLOB SOURCES "src/*.c")

# Define the compilation flags
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -Werror")

# Last step: add executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Given that CMake has a tree structure, the libraries are added as follows
add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

# In order to use the libraries, the headers defined in the libraries must be declared
target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

# Libreries must be linked
target_link_libraries(${PROJECT_NAME} StatiCLib DynamiCLib)

# In CMake everything is a target. Everything is a goal that must be built

# Tests subdirectory is added
if (RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
    # See: https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html
    add_subdirectory(tests)
endif()
