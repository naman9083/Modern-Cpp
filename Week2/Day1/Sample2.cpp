#include <iostream>
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
    std::cout << "Cube of: " << a << " is: " << a * a * a << "\n";
}
// calculate is a higher order function
// a higher order function either
// accepts or returns(or both )another function

void calculate(int *arr, int size, std::function<void(int)> fn)
{
    for (int i = 0; i < size; i++)
    {
        fn(arr[i]);
    }
}
int main(int argc, char const *argv[])
{

    int arr[5] = {10, 20, 30, 40, 50};
    calculate(arr, 5, squareOfNumber);
    std::cout << "\n";
    calculate(arr, 5, cubeOfNumber);

    return 0;
}
