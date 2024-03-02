#include <iostream>
#include <functional>
#include <vector>
#include <math.h>
/*
    Objective : Design an adaptor to accept a vector of integers a predicate (a function that return true or false based on single input)

                Use the predicate to print data from the vector

*/

void Adaptor(std::function<bool(int)> predicate, const std::vector<int> &vc)
{
    for (int val : vc)
    {
        if (predicate(val))
        {
            std::cout << val << "\n";
        }
    }
}

int main(int argc, char const *argv[])
{
    // Adaptor([](int number)
    //         { return number % 5 == 0; },
    //         std::vector<int>{10, 11, 12, 15, 16, 13, 19});
    // Adaptor([](int number)
    //         { return number % 3 == 0; },
    //         std::vector<int>{10, 11, 12, 15, 16, 13, 19});
    Adaptor([](int n)
            {   
                if(n==2 || n==3)return true; 
                if(n%2==0||n%3==0) return false ;


                for (int i = 5; i <= std::sqrt(n); i++)
                {
                    if(n%i == 0)
                        return false;
                }
                return true;
                
                
                 },
            std::vector<int>{10, 11, 12, 15, 16, 13, 19});

    return 0;
}
