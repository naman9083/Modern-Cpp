#include <iostream>
#include <vector>
#include <memory>
#include <functional>
class Employee
{
    int id;
    std::string name;
    float salary;

public:
    Employee() = delete;

    Employee(const Employee &) = delete; // disabled copy constructor

    Employee(Employee &&) = delete; // enabled move constructor brand new in C++11

    Employee &operator=(const Employee &) = delete; // disabled assignment operator

    Employee &operator=(Employee &&) = delete; // enabled assignment move operator brand new in C++11

    ~Employee() = default;

    Employee(int id_, std::string name_, float salary_) : id{id_}, name{name_}, salary{salary_} {}

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs)
    {
        os << "Id: " << rhs.id << "\n"
           << "Name: " << rhs.name << "\n"
           << "Salary: " << rhs.salary << "\n";
        return os;
    }

    float operator+(const Employee &rhs)
    {
        return salary + rhs.salary;
    }

    float operator-(const Employee &rhs)
    {
        return salary - rhs.salary;
    }

    void operator()()
    {
        std::cout << " Tax for this employee at 10%: " << salary * .1f << "\n";
    }

    float getSalary() const { return salary; }
    void setSalary(float salary_) { salary = salary_; }

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    int getId() const { return id; }
    void setId(int id_) { id = id_; }
};

using EmployeePtr = std::shared_ptr<Employee>;

/*

    Objective : Take a container of raw pointers to Employee and filter and print details based on predicate passed
*/

void Adaptor(

    const std::vector<Employee *> &data,
    std::function<bool(Employee *d)> predicate)
{
    for (Employee *ptr : data)
    {
        if (predicate(ptr))
        {
            std::cout << *ptr << "\n";
        }
    }
}
void Adaptor(

    const std::vector<EmployeePtr> &data,
    std::function<bool(EmployeePtr)> predicate)
{
    for (EmployeePtr ptr : data)
    {
        if (predicate(ptr))
        {
            std::cout << *ptr << "\n";
        }
    }
}

int main(int argc, char const *argv[])
{

    std::vector<Employee *> data{
        new Employee(219415, "Naman Khurana", 20000.0f),
        new Employee(219602, "Aadarsh Gajare", 21000.0f),
        new Employee(219501, "Ajit Kumar", 22000.0f),
        new Employee(219634, "Vishal Pandey", 19000.0f),
        new Employee(219409, "Anupma Kumari", 17000.0f),
    };
    std::vector<EmployeePtr> data1{
        std::make_shared<Employee>(219415, "Naman Khurana", 20000.0f),
        std::make_shared<Employee>(219602, "Aadarsh Gajare", 21000.0f),
        std::make_shared<Employee>(219501, "Ajit Kumar", 22000.0f),
        std::make_shared<Employee>(219634, "Vishal Pandey", 19000.0f),
        std::make_shared<Employee>(219409, "Anupma Kumari", 17000.0f),
    };

    Adaptor(data,

            [](Employee *ptr)
            {
                if (ptr)
                {
                    return ptr->getSalary() > 20000.0f;
                }
                else
                    return false;
            });

    Adaptor(data1, [](EmployeePtr ptr)
            {
        if(ptr){
            return ptr->getSalary() > 20000.0f;
        }
        else return false; });

    return 0;
}
