#include "CppUTest/TestHarness.h"
#include "mqtt.h"
// #include <stdio.h>
TEST_GROUP(testeIntegracao)
{

    void setup(){
        // Init stuff
    };

    void teardown(){
        // Un-init stuff
    };
};

TEST(testeIntegracao, campare_string)
{
    STRCMP_EQUAL("mqtt", mqtt_ultil::pyload().c_str());
}
