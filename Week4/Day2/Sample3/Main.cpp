#include "Functionalities.hpp"
Employee* Magic()
{
    Employee *e1=new Employee("Naman Khurana", 87622.0f, "Intern", 1);
    std::cout << e1
              << "\n";
    return e1;
}
/*
    Copy
*/
int main()
{
    Employee* emp = Magic();
    std::cout << emp << "\n";
    delete emp;
    return 0;
}