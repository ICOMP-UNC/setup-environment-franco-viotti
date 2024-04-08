cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Define a project
project(
    "DynamiCLib" # Project name
    VERSION 1.0.0 # Project version
    DESCRIPTION "This is my first project in CMake" # Project description
    LANGUAGES C # Language to be used
)

# Define the C standard
set(CMAKE_C_STANDARD 17)

# Define the include directories
include_directories(include)

# Define the sources
# Uses file function eventhough it includes all .c files
file(GLOB SOURCES "src/*.c")

# Define compiler flags
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")

# This is the only difference with the root CMakeLists.txt
# Add libraries and define if they are STATIC, SHARED or MODULE
add_library(${PROJECT_NAME} SHARED ${SOURCES})
