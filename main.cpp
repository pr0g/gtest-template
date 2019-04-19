#include "gtest/gtest.h"
#include "gmock/gmock.h"

using namespace testing;

int main(int argc, char **argv) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// dummy test
TEST(SampleTest, TestShouldPass)
{
    const bool something = true;
    ASSERT_THAT(something, Eq(true));
}