#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"

// IMPORT_TEST_GROUP(TesteLimites);
// IMPORT_TEST_GROUP(testeIntegracao);

int main(int ac, char **av)
{

    return CommandLineTestRunner::RunAllTests(ac, av);
}

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
