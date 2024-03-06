#include <iostream>
/*
    Accept infinite parameters
    add 1 parameter with remaining

*/

template <typename... T>
auto add(T... n1)
{
    return (n1 -  ...); // right associative
}

int main()
{
    std::cout << add(1, 2, 3, 3, 4, 5, 6, 7, 8) << "\n";
                //   5 -4  6 -3  6 -2  7 -1  0
    return 0;
}

/*
    1)     std::thread
            -one thread
            -container of threads
            -std::mutex for race condition
            -std::lock_gauard to manage mutex based on scope

    2)     If Initializer
    3)     std::optional
    4)     structured binding
    5)     std::variants:
            - functional polymorphism
            - std::visit, std:: holds_alternative
    
    6)     std::conditional_variable
    7)     std::async
                - with future_input
                - without future input
    8)     fold expressions
    9)      variadic templates
*/