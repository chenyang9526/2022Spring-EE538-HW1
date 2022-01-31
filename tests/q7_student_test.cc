#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q7_Student_1, climbStairsTest) {
  CPPLib s;
  int n_test = 5;
  EXPECT_EQ(s.climbStairs(4), n_test);
}

TEST(Q7_Student_2, climbStairsTest) {
  CPPLib s;
  int n_test = 0;
  EXPECT_EQ(s.climbStairs(0), n_test);
}

TEST(Q7_Student_3, climbStairsTest) {
  CPPLib s;
  int n_test = -1;
  EXPECT_EQ(s.climbStairs(-5), n_test);
}

TEST(Q7_Student_4, climbStairsTest) {
  CPPLib s;
  int n_test = -1;
  EXPECT_EQ(s.climbStairs(55), n_test);
}