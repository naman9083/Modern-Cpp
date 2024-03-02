#include <iostream>
#include <functional>

/*

    Objective : create an adaptor which takes

    1) A callable of the following signature
    Input: int and Int

    Output void

    2) Integer number n1
    3) Integer number n2


    The adaptor must apply/map the callable on the 2) and 3) integers


*/
/*
    Honda : Login ----->  "Something must happen after successful login"

*/
/*
    A function that accepts or returns function is known as Higher-Order Function

    a) A function wrapper for all functions that have the following signature

        i) int,int input parameters
        ii) void as return type

    add 2 integers
*/

void adaptor(std::function<void(int&, int&)> fn, int &&n1, int &&n2)
{

    fn(n1, n2);
}


void addition(int n1, int n2)
{
    std::cout << n1 + n2;
}

int main(int argc, char const *argv[])
{
    adaptor(
        [](int n1, int n2)
        {
            std::cout << n1 * n2 << "\n";
        },
        11, 22);
    adaptor(
        [](int n1, int n2)
        {
            std::cout << std::abs(n1 - n2) << "\n";
        },
        11, 22);
    return 0;
}
