cmake_minimum_required(VERSION 3.24)

project(tdd-Utest)

set(CMAKE_CXX_STANDARD 17)
#add_compile_options(-std=c++11 -Wall -Werror)
# LIB_MQTT_UTIL como variavel para ser usada em outros lugares
set(LIB_MQTT_UTIL ${PROJECT_SOURCE_DIR}/src/mqtt)

add_subdirectory(src/mqtt)
add_subdirectory(src)
add_subdirectory(test)
