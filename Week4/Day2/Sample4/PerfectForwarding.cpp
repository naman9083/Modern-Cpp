#include "Employee.hpp"


/*  
    The middlemen/intermediate functions will have to designed to accept 0 or more arguement (potentially infinite)

    2) lvalue binding to rvalue sitution is ANNOYING!
*/

template<typename T,typename... Args>
T relay(Args&&...n1){
    return T(std::forward<Args>(n1)...);
}
template <typename T, typename... Args>
T relay1(Args... a)
{
    return T(std::forward<Args>(a)...);
}

void Magic(int &&n1){
    //10 gets assigned to n1. now n1 is lvalue!
    //forwarding n1 to any function will now forward n1 as lvalue
    //rather than rvalue
    //Demo(n1)//lvalue passed to rvalue reference

}


int main()
{
    Employee emp = relay<Employee>("Naman", 21000.0f, "Software Developer", 2);
    std::cout << emp;
    return 0;
}