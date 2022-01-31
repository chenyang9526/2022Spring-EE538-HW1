// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
<<<<<<< HEAD
TEST(Q2_Student_1, FindAverageTest) {
  CPPLib s;
  std::vector<int> vect_test = {};
  EXPECT_EQ(s.FindAverage(vect_test), -1);
}

TEST(Q2_Student_2, FindAverageTest) {
  CPPLib s;
  std::vector<int> vect_test = {10,20,30};
  EXPECT_EQ(s.FindAverage(vect_test), 20);
}

TEST(Q2_Student_3, FindAverageTest) {
  CPPLib s;
  std::vector<int> vect_test = {1,2,4};
  double a = 7;
  double b = 3;
  EXPECT_EQ(s.FindAverage(vect_test), a/b);
=======
TEST(Q2_Student, ReturnIntro) {
  EXPECT_EQ(true, true);
>>>>>>> 378e23999a8194df859404e6e8dbad41bc662d07
}