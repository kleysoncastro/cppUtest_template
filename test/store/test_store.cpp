#include "CppUTest/TestHarness.h"
// #include <stdio.h>
TEST_GROUP(TesteLimites)
{

    void setup(){
        // Init stuff
    };

    void teardown(){
        // Un-init stuff
    };
};

TEST(TesteLimites, key_local)
{
    // const char *test = "hello";
    STRCMP_EQUAL("mqtt", "mqtt");
}
