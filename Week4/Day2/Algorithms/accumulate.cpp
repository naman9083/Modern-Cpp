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
        rule 1:  default operation is binary+
    */
    std::cout << std::accumulate(data1.begin(), data1.end(), 0.0f, [](float answer_upto_current_point, const Employee emp)
                                 { return answer_upto_current_point + emp.getSalary(); })
              << "\n";

    std::cout << std::accumulate(data2.begin(), data2.end(), 0.0f, [](float answer_upto_current_point, const EmployeeRaw emp)
                                 { return answer_upto_current_point + emp->getSalary(); })
              << "\n";

    std::cout << std::accumulate(data3.begin(), data3.end(), 0.0f, [](float answer_upto_current_point, const EmployeeSmart emp)
                                 { return answer_upto_current_point + emp->getSalary(); })
              << "\n";

    /*
        [Naman   | 20000.0f | "Trainee"|2]
        [Ajit    | 20000.0f | "Trainee"|1]
        [Aadarsh | 20000.0f | "Trainee"|0]
    */
}

/*
        Functional programming
            - map: applying a logic(function) on all items in data collection(one by one)
            - filter: extracting items that satisfy a condition from the data collection
            - reduce: collecting/summarizing/gathering/converting multiple items into a single item based on a binary operation

            e.g: 10 20 30 40 50 60 70
                - reduce 5 numbers into 1 number by summation aggeration
                - reduce 5 numbers into 1 by product aggregation.



*/