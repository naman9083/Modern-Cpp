#include "Student.hpp"
#include <memory>

using PersonP = std::shared_ptr<Person>;
using StudentP = std::shared_ptr<Student>;
int main(int argc, char const *argv[])
{
    StudentP s1 = std::make_shared<Student>("Naman", 22, 4563, 14);
    PersonP p1 = std::make_shared<Student>("Naman", 22, 4563, 14);
    StudentP s = std::dynamic_pointer_cast<Student>(p1);
    std::cout << *s;
    return 0;
}
