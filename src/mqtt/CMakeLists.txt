add_library(mqtt_util mqtt.cpp mqtt.h)
target_include_directories(mqtt_util PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})