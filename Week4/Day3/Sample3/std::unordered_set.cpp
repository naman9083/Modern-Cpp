#include <iostream>
#include <unordered_set>
#include "../Sample1/Functionalities.hpp"
int main()
{

    // std::unordered_set<int> s1{12, 12, 11, 13, 11, 13, 11, 14};

    // s1.insert(11).second ? std::cout << "Element added\n" : std::cout << "Not added\n";


    auto EmployeeHash = [](const EmployeeSmart &emp) {
        return std::hash<std::string>()(emp->getName()) ^ std::hash<float>()(emp->getSalary()) ^ std::hash<std::string>()(emp->getDesignation()) ^ std::hash<int>()(emp->getExpYear());
    };
    auto EmployeeEqual = [](const EmployeeSmart &emp1, const EmployeeSmart &emp2) {
        return emp1->getName() == emp2->getName() && emp1->getSalary() == emp2->getSalary() && emp1->getDesignation() == emp2->getDesignation() && emp1->getExpYear() == emp2->getExpYear();
    };

    std::unordered_set<EmployeeSmart, decltype(EmployeeHash), decltype(EmployeeEqual)> empSet(10, EmployeeHash, EmployeeEqual);
    
    //10 indicates the initial bucket count
    //EmployeeHash is the hash function
    //EmployeeEqual is the equality function
    //only way to maintain the uniqueness of the elements in the set of custom objects


    empSet.insert(std::make_shared<Employee>("Naman", 20010.0f, "Dev", 1));
    empSet.insert(std::make_shared<Employee>("Naman", 20010.0f, "Dev", 1));
    empSet.insert(std::make_shared<Employee>("Naman", 20010.0f, "Dev", 1));
    empSet.insert(std::make_shared<Employee>("Naman", 20010.0f, "Dev", 1));

    std::cout << empSet.size();
    std::cout << '\n';

    return 0;
}
