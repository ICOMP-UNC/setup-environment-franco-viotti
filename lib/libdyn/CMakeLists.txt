cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Se define un projecto
project(
    "DynamiCLib" # Nombre del projecto
    VERSION 1.0.0 # Versión del projecto
    DESCRIPTION "This is my first project in CMake" # Descripción del projecto
    LANGUAGES C # Lenguajes que se van a utilizar
)

# Se define el estándar a utilizar de C
set(CMAKE_C_STANDARD 17)

# Se define la ubicacion de las librerias a utilizar
include_directories(include)

# Se define la ubicacion de los codigos fuente
# se utiliza la funcion 'file', con la desventaja que se incluyen todos los archivos .c
file(GLOB SOURCES "src/*.c")

# Se definen las flags de compilación
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")

# Esta es la unica diferencia con el CMakeLists.txt anterior
# Se agregan las librerias y se aclara si es STATIC, SHARED o MODULE
add_library(${PROJECT_NAME} SHARED ${SOURCES})
