cmake_minimum_required(VERSION 3.24)
## lib mqtt_util


include_directories(${LIB_MQTT_UTIL})
add_library(mqtt_test mqtt/test_mqtt.cpp)
add_library(store_test store/test_store.cpp)
## Configuração de cpputest 

set(CPPUTEST_HOME /home/castro/program/lib/cpputest/)

message("-- user CPPUTEST_HOME=" ${CPPUTEST_HOME})
add_executable(test main.cpp)
include_directories(${CPPUTEST_HOME}/include)
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
             IMPORTED_LOCATION ${CPPUTEST_HOME}/cpputest_build/src/CppUTest/libCppUTest.a)

add_library(imp_cpputestExt STATIC IMPORTED)
set_property(TARGET imp_cpputestExt PROPERTY
            IMPORTED_LOCATION ${CPPUTEST_HOME}/cpputest_build/src/CppUTestExt/libCppUTestExt.a)


# link lib mqtt_util
target_link_directories(mqtt_util PUBLIC ${LIB_MQTT_UTIL})


### end config cpputest      
target_link_libraries(test mqtt_test mqtt_util store_test imp_cpputest imp_cpputestExt)

## link lld
#cmake -DCMAKE_CXX_FLAGS="-fuse-ld=lld" -B build
