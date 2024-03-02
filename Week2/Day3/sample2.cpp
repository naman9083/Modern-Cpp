#include <functional>
#include <iostream>
class Action
{
    int _id{9};

public:
    Action() = default;

    Action(const Action &) = delete; // disabled copy constructor

    Action(Action &&) = delete; // enabled move constructor brand new in C++11

    Action &operator=(const Action &) = delete; // disabled assignment operator

    Action &operator=(Action &&) = delete; // enabled assignment move operator brand new in C++11

    ~Action() = default;

    void operation(int number)
    {
        std::cout << _id * number << "\n";
    }
};

int main(int argc, char const *argv[])
{
    Action s1;
    auto binded_operation = std::bind(&Action::operation, &s1, 40);

    binded_operation();

    return 0;
}
