#include <iostream>
#include "Functionalities.hpp"
#include <queue>

template <typename T>
struct less_comparator
{
    bool operator()(T a, T b)
    {
        return a > b;
    }
};

template <typename T, typename C>
void display(std::priority_queue<T, std::vector<T>, C> pqData)
{
    while (!pqData.empty())
    {
        std::cout << pqData.top();
        std::cout<<'\n';
        pqData.pop();
    }
}

int main()
{
    auto comp = [](const Employee &e1, const Employee &e2)
    { return e1.getExpYear() < e2.getExpYear(); };

    std::priority_queue<int, std::vector<int>, std::less<int>> pq;
    pq.push(60);
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    std::cout << pq.top();
    std::cout << '\n';

    EmployeeContainer emp;
    createEmployees(emp);

    std::priority_queue<Employee, std::vector<Employee>, decltype(comp)> pq2(emp.begin(), emp.end(), comp);

    pq2.push(Employee("Naman Khurana", 65434.0f, "CS Engineer", 2));
    pq2.push(Employee("Anshul Khurana", 55434.0f, "Accountant", 5));
    pq2.push(Employee("Shivam Manchanda", 45434.0f, "IT Engineer", 1));
    pq2.push(Employee("Karan Manchanda", 25434.0f, "IT Support", 1));

    display<Employee, decltype(comp)>(pq2);
    return 0;
}