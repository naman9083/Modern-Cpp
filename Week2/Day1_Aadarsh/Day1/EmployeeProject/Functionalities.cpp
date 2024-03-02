#include "Functionalities.h"

void CreateObject(Employee **employees, Project **projects)
{   
    projects[0]=new Project("pr101",66700.0f,11);
    employees[0]=new Employee("em101","Abc",56000.0f,*projects[0]);

}

void CreateObject(std::vector<Employee*> &employees, std::vector<Project *> projects)
{
    projects[0]=new Project("pr101",66700.0f,11);
    employees[0]=new Employee("em101","Abc",56000.0f,*projects[0]);
}


