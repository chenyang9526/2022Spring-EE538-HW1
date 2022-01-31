#include <iostream>
#include "src/lib/cpplib.h"

int main() {
  // Print Hello world!
  CPPLib s;
<<<<<<< HEAD
  std::vector<int> vect1 = {1,2,4};
  //std::cout << s.FindAverage(vect1) << std::endl;
  //std::cout << s.FindAverage1(&vect1) << std::endl;
  //std::cout << s.FindAverage2(vect1) << std::endl;
  std::cout << s.FindAverage(vect1) << std::endl;
  std::cout << s.PrintIntro() << std::endl;

  std::vector< std::vector< std::vector<int> > > vect2 = {{{1,2},{3,4}},{{5,6, }},{{7,8}}};
  s.Flatten3DVector(vect2);
  std::cout << s.climbStairs(4) << std::endl;
=======
  std::cout << s.PrintIntro() << std::endl;
  
>>>>>>> 378e23999a8194df859404e6e8dbad41bc662d07
  return 0;
}