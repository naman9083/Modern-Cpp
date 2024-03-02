#include <iostream>
class Sample1
{
public:
    Sample1() = delete;
    Sample1(const Sample1 &) = delete;            // disabled copy constructor
    Sample1(Sample1 &&) = delete;                 // enabled move constructor brand new in C++11
    Sample1 &operator=(const Sample1 &) = delete; // disabled assignment operator
    Sample1 &operator=(Sample1 &&) = delete;      // enabled assignment move operator brand new in C++11
    ~Sample1() = default;
};
/*
    system which accepts data values and "Logic". This logic will be be applied on every single data value received output will be shown


    Higher order functions!
    Anonymous functions
    functional programming paradigm
    no state
    immutable data
    currying
    First-class function
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
void calculate(int *arr, int size, void (*p)(int))
{
    for (int i = 0; i < size; i++)
    {
        p(arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    // void (*ptr)(int )=squareOfNumber;
    // void (*ptr2)(int )=cubeOfNumber;
    int arr[5] = {10, 20, 30, 40, 50};
    calculate(arr, 5, squareOfNumber);
    calculate(arr, 5, cubeOfNumber);

    return 0;
}
