#include "Functionalities.hpp"

int main()
{
    EmployeeContainer data1;
    EmployeeRawCon data2;
    EmployeeSmartCon data3;

    createEmployees(data1);
    createEmployeesPointer(data2);
    createEmployeesSmartPointer(data3);

    /*
        result  ------->
    */

    EmployeeContainer result(data1.size());
    //copy
    // std::copy(data1.begin(), data1.end(), result.begin());
    //copy if
    
    auto itra = std::copy_if(
        data1.begin(), data1.end(), result.begin(), [](const Employee &e)
        { return e.getSalary() > 20000.0f; });


    std::size_t actual_size = std::distance(result.begin(), itra);
    result.resize(actual_size);

    for (auto itr = result.begin(); itr != result.end(); itr++)
        std::cout << *itr<<"\n";

    
    
    return 0;
}

/*  
    1) This is a copy opeartion. copy has to be supported
    2) We don't know how many instances will satify the condition
    3) to copy from source to destination, destination has to initialized with memory allocated to it.

*/