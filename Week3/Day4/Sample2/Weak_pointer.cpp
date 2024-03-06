#include <iostream>
#include <memory>
#include <thread>
#include "Employee.hpp"

std::shared_ptr<Employee> sptr;

void Magic(std::shared_ptr<Employee> owner2)
{
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << *owner2;
}

int main()
{
    sptr = std::make_shared<Employee>("Naman Khurana\n", 456789.0f, "Developer", 1);
    Magic(sptr);
    std::weak_ptr<Employee> wkptr = sptr;

    if (wkptr.lock())
    {
        std::cout << "Tiger zindaaa hai\n";
    }
    else
        std::cout << "Tiger mr gya\n";

    sptr.reset();

    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    if (wkptr.lock())
    {
        std::cout << "Tiger zindaaa hai\n";
    }
    else
        std::cout << "Tiger mr gya\n";

        return 0;
}