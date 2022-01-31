#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return "Name: Chenyang Zhao, Email: zhao361@usc.edu, Major: BME"; 
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;
    if (!input.empty())
    {
        for (auto v1 : input){
            if (v1.empty())
                continue;
            else{
                for (auto v2 : v1){
                    if (v2.empty())
                        continue;
                    else{
                        for (auto element : v2){
                            res.push_back(element);
                        }
                    }
                }
            }
        }
    }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    int n_ways;
    if (n>2 & n<=45){
        n_ways = climbStairs(n-1)+climbStairs(n-2);
    }
    else if (n == 2){
        return 2;
    }
    else if (n == 1){
        return 1;
    }
    else if (n == 0){
        return 0;
    }
    else{
        return -1;
    }
    return n_ways;
}

/*
//value
double CPPLib::FindAverage(std::vector<int> input){
    if (input.size() == 0){
        return -1;
    }
    std::vector<int>::iterator it;
    double sum = 0;
    for (it = input.begin();it != input.end();it++){
        sum += *it;
    }
    return sum/input.size();
}
// pointer
double CPPLib::FindAverage1(std::vector<int> *input){
    //std::vector<int> v1 = *input;
    if ((*input).size() == 0){
        return -1;
    }
    std::vector<int>::iterator it;
    double sum = 0;
    for (it = (*input).begin();it != (*input).end();it++){
        sum += *it;
    }
    return sum / (*input).size();
}
// reference
double CPPLib::FindAverage2(std::vector<int> &input){
    if (input.size() == 0){
        return -1;
    }
    std::vector<int>::iterator it;
    double sum = 0;
    for (it = input.begin();it != input.end();it++){
        sum += *it;
    }
    return sum / input.size();
}*/
/*
// const reference using iterator
double CPPLib::FindAverage3(const std::vector<int> &input){
    if (input.size() == 0){
        return -1;
    }
    std::vector<int>::const_iterator it;
    double sum = 0;
    for (it = input.begin();it != input.end();it++){
        sum += *it;
    }
    return sum / input.size();
}*/
// const reference using auto
double CPPLib::FindAverage(const std::vector<int> &input){
    if (input.size() == 0){
        return -1;
    }
    double sum = 0;
    for (auto element : input){
        sum += element;
    }
    return sum / input.size();
}
