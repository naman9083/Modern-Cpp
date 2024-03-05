#include <iostream>

/*
    Variadic Templates

*/

/*
    add is a function that takes 2 paramters of type "int" It uses them as operands for binary + operator and returns the result of + operator aplied on thes operands
*/

template <typename T>
T adder(T n1)
{

    return n1 ;
}

template <typename T, typename... Remaining>
T adder(T first, Remaining... args)
{
    return first + adder(args...);
}



int main()
{
    
    return 0;
}

// int main()
// {

//    return 0;
// }