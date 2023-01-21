#include "CppUTest/TestHarness.h"
// #include "mqtt.h"

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
    const char *test = "hello";
    STRCMP_EQUAL("mqtt", test);
}
