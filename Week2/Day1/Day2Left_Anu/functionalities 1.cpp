#include "functionalities.h"

void CreateObjects(Container1 &data1, Container2 &data2){  //an array of pointer is passed as **
    data2[0]=new Project("Pr101",66700.0f,11);
    data1[0]=new Employee("emp101","Anu",56000.0f, *data2[0]);

    data2[1]=new Project("Pr102",66700.0f,11);
    data1[1]=new Employee("emp102","Bitu",56000.0f, *data2[1]);

    data2[2]=new Project("Pr102",66700.0f,11);
    data1[2]=new Employee("emp102","Bitu",56000.0f, *data2[2]);

}

// void CreateObjects(std::vector<Employee*>& employees, std::vector<Project*>& projects){
//     projects[0] = ( new Project("Pr101",66700.0f,11));
//     employees[0] = (new Employee("emp101","Harshit",56000.0f, *projects[0]));  //deference karenge
// }

void DeleteObjects(const Container1 &data1){
    for(Employee* p: data1){
        delete p;
    }

}

void DeleteObjects1(const Container2 &data2){
    for(Project* p: data2){
        std::cout<<"Hello";
        delete p;
        
    }

}

/*
    1.) Identation, naming convention and appropriate use of comments
    2.) Multiple files with separate header and implementation.
    3.) All functionalities working with proper output, proper corner case check
    4.) Main side client code
    

    less relevant : 
        1.) Use of smart pointers (only for week 1)
        2.) No Custom exception! (only for week 1 and week 2)




*/

