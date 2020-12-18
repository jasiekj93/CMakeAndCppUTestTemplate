#include <CppUTest/TestHarness.h>

#include <libFoo/Core/Core.hpp>

TEST_GROUP(CoreTest)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(CoreTest, Exponent_Two)
{
    double value = 5;

    CHECK_EQUAL((value * value), Foo::Core::Power(value, 2));
}

TEST(CoreTest, Exponent_One)
{
    double value = 5;

    CHECK_EQUAL(value, Foo::Core::Power(value, 1));
}

TEST(CoreTest, Exponent_Zero)
{
    double value = 5;

    CHECK_EQUAL(1, Foo::Core::Power(value, 0));
}

TEST(CoreTest, Base_Zero)
{
   double value = 0;

   CHECK_EQUAL(value, Foo::Core::Power(value, 100000));
}