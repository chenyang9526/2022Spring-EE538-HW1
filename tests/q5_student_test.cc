#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, ReturnIntro) {
  CPPLib c;
  std::string str_test = c.PrintIntro();
  std::string str_check = "Name: Chenyang Zhao, Email: zhao361@usc.edu, Major: BME";
  EXPECT_EQ(str_test, str_check);
}