cmake_minimum_required(VERSION 3.15)
project(leerXMLGenicam)

set(CMAKE_CXX_STANDARD 11)

add_executable(leerXMLGenicam main.cpp)

message( STATUS "Ruta donde busca xml: ${CMAKE_SOURCE_DIR}/carpeta_datos/genicam.xml")
add_custom_command(
        TARGET leerXMLGenicam POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                ${CMAKE_SOURCE_DIR}/carpeta_datos/genicam.xml
                ${CMAKE_CURRENT_BINARY_DIR}/genicam.xml)