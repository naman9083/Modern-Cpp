/*
    Hashtable
    Key is integer (Employee ID)
    value is Employee Object on stack
 */

#include <unordered_map>
#include <iostream>
#include "Employee.hpp"

template<typename K,typename V>
void Display(const std::unordered_map<K,V>& mapData){
    for(auto [key,value]:mapData){
        std::cout << "Key: " << key << "\n"
                  << "Value: " << value << "\n";
    }
}
template<typename K,typename V>
void createObjects(std::unordered_map<K,V>& mapData){
    mapData.emplace(101,Employee( 101, "Naman", 20000.0f, "Trainee"));
    mapData.emplace(102, Employee(102, "Vishal", 20000.0f, "Trainee"));
}

int main()
{
    std::unordered_map<int, Employee> mapData;
    createObjects<int, Employee>(mapData);
    Display<int, Employee>(mapData);


    
    return 0;
}