cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

# Se define un projecto
project(
    "FirstProjectInCMake" # Nombre del projecto
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
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -Werror")

# El último paso es agregar el ejecutable
add_executable(${PROJECT_NAME} ${SOURCES})

# Teniendo en cuenta que el CMake tiene una estructura de arbol, se 
# agregan las librerias de la siguiente manera
add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

# Para usar las librerias hay que declarar los headers definidos en las librerias
target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

# Por ultimo, hay que linkear las librerias
target_link_libraries(${PROJECT_NAME} StatiCLib DynamiCLib)

# En CMake todo es un target. Todo es un objetivo que se debe construir