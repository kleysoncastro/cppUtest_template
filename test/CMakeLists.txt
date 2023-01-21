cmake_minimum_required(VERSION 3.24)

## lib mqtt_util
#include_directories(${LIB_MQTT_UTIL})
#add_library(mqtt_test mqtt/test_mqtt.cpp)
#add_library(store_test store/test_store.cpp)
set( CPPUTEST_HOME  ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(test main.cpp)
include_directories(/home/castro/Downloads/cpputest-3.8/include)
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
             IMPORTED_LOCATION /home/castro/Downloads/cpputest-3.8/cpputest_build/src/CppUTest/libCppUTest.a)


#link_directories(${CPPUTEST_LIBRARIES})
target_link_libraries(test imp_cpputest)

#target_link_libraries(case ${APP_LIB_NAME} ${CPPUTEST_LIBRARIES})


## link lld
#cmake -DCMAKE_CXX_FLAGS="-fuse-ld=lld" -B build
