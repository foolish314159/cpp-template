#include <gtest/gtest.h>
#include "dummy.h"

TEST(AddTest, PositiveNumbers)
{
  EXPECT_EQ(8, Add(2, 6));
  EXPECT_EQ(4, Add(1, 3));
  EXPECT_EQ(10, Add(5, 5));
}

TEST(AddTest, NegativeNumbers)
{
  EXPECT_EQ(-4, Add(-2, -2));
  EXPECT_EQ(-9, Add(-3, -6));
  EXPECT_EQ(-3, Add(-2, -1));
}