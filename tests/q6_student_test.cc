#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, Flatten3DVectorTest) {
  CPPLib c;
  std::vector< std::vector< std::vector<int> > > vect = {{{1,2},{3,4}},{{5,6, }},{{7,8}}};
  std::vector<int>  vect_test = c.Flatten3DVector(vect);
  std::vector<int>  vect_true = {1,2,3,4,5,6,7,8};
  EXPECT_EQ(vect_test, vect_true);
}