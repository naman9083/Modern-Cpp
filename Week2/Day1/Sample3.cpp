#include <iostream>
#include <vector>
#include <functional> //supports for functional programming

// use function keyword for passing function as an argument

/*
    system which accepts data values and "Logic". This logic will be be applied on every single data value received output will be shown


    Higher order functions!
    Anonymous functions
    functional programming paradigm
    no state
    immutable data
    currying
    First-class function

    Function wrapper replaces function pointer

*/

void squareOfNumber(int a)
{
    std::cout << "Square of: " << a << " is: " << a * a << "\n";
}
void cubeOfNumber(int a)
{
    std::cout << "Square of: " << a << " is: " << a * a * a << "\n";
}
// calculate is a higher order function
// a higher order function either
// accepts or returns(or both )another function

void calculate(std::vector<int> &arr, std::function<void(int)> fn)
{
    for (int i : arr)
    {
        fn(i);
    }
}

int main(int argc, char const *argv[])
{

    std::function /* auto */ temp = [&](int a) -> int
    {
        std::cout << a << "\n";
    };
    
    std::vector<int> arr{10, 20, 30, 40, 50};
    calculate(arr,
              [&](int a) //anonymous function
              {
                  std::cout << a << "\n";
              });

    calculate(arr, temp);
    std::cout << "\n";
    calculate(arr, cubeOfNumber);
    
    return 0;
}

