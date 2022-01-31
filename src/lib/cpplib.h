#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // NOTE: write your own function declaration q2 here

  // Print your self-introduction
  std::string PrintIntro();
  
  // q6
  std::vector<int> Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input);

  // Climbing Stairs
  int climbStairs(int n);
<<<<<<< HEAD

  //double FindAverage(std::vector<int> input);

  //double FindAverage1(std::vector<int> *input);

  //double FindAverage2(std::vector<int> &input);

  double FindAverage(const std::vector<int> &input);

=======
>>>>>>> 378e23999a8194df859404e6e8dbad41bc662d07
  
  private : 
};

#endif
