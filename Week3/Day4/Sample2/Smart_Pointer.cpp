#include "Employee.hpp"


/*  
    SMART POINTERS: THEY ARE WRAPPERS around raw pointers to allow better memory management using RAII design pattern

        1) shared_ptr
        2) unique_ptr
        3) weak pointer : stalker pointer [ shared pointer ----> token ]
        4)

*/

/*
    <------------------- 20 Bytes ---------------->
    <---------12 Bytes----------> <--- 8 Bytes --->
    <-----------ptr1------------> <----- ptr2----->

*/


#include <memory>
#include <thread>
#include <mutex>

bool allthreadDone = false;

std::mutex mt;

void changeName(std::shared_ptr<Employee> owner2) {
    owner2->setName("Tanz");
    std::lock_guard<std::mutex> lg(mt);
    allthreadDone = true;
    std::cout << *owner2;
}

void UpdateSalary(std::shared_ptr<Employee> owner3) {
    owner3->setSalary(22000.0f);
    std::lock_guard<std::mutex> lg(mt);
    allthreadDone = true;
    std::cout << *owner3;
}

void changeName1(std::unique_ptr<Employee>& owner2) {
    owner2->setName("Tanz");
    std::lock_guard<std::mutex> lg(mt);
    allthreadDone = true;
    std::cout << *owner2;
}

void UpdateSalary1(std::unique_ptr<Employee>& owner3) {
    owner3->setSalary(22000.0f);
    std::lock_guard<std::mutex> lg(mt);
    allthreadDone = true;
    std::cout << *owner3;
}

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // std::shared_ptr<int[]> ptr1 = std::make_shared<int[]>(arr);

    // std::shared_ptr<Employee> owner1 = std::make_shared<Employee>("Naman", 20000.0f, "C++ Engineer", 2);

    // std::thread t1(&changeName, owner1);
    // std::thread t2(&UpdateSalary, owner1);
    // if (std::lock_guard<std::mutex> lg(mt); !allthreadDone)
    //     std::cout << *owner1;
    
    // t1.join();
    // t2.join();
    std::unique_ptr<Employee> owner1 = std::make_unique<Employee>("Naman", 20000.0f, "C++ Engineer", 2);

    std::thread t1(&changeName1, std::ref(owner1));
    std::thread t2(&UpdateSalary1, std::ref(owner1));
    if (std::lock_guard<std::mutex> lg(mt); !allthreadDone)
        std::cout << *owner1;
    
    t1.join();
    t2.join();
    return 0;
}