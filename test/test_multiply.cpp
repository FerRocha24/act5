#include <gtest/gtest.h>
#include "multi.h"

TEST(MultiTest, HandlesPositiveInput)
{
    int multi = multiply(5, 5);

    EXPECT_EQ(multi, 25);
}

TEST(MultiTest, HandlesZeroInput)
{
    int multi = multiply(5, 0);

    EXPECT_EQ(multi, 0);
}