/*
    A situation where only one element needs to be accessed and it is the most recent item inserted in the container

    e.g. : A compiler executing functions calls
    f1(){
        f2();
    }

    call stack:

    f2<---------------recently added, top most entry. Will be accessed first!

    f1<---------------still pending


*/
#include <iostream>
#include <stack>
#include "Functionalities.hpp"

using ContainerS = std::stack<Employee>;
int main()
{
    ContainerS s1;
    s1.push(Employee("Naman Khurana", 20000.0f, "Designer", 1));
    s1.push(Employee("Ajit Kumar", 20000.0f, "Developer", 2));
    s1.push(Employee("Vishal Kumar", 20000.0f, "Tester", 1));

    std::cout << s1.top();

    std::cout << '\n';

    return 0;
}




/*

    Linear search

*/
