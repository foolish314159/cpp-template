#include <gtest/gtest.h>
#include "dummy.h"

TEST(AddTest, PositiveNumbers)
{
  EXPECT_EQ(8, Add(2, 6));
}

TEST(AddTest, NegativeNumbers)
{
  EXPECT_EQ(-4, Add(-2, -2));
}