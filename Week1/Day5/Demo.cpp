#include <iostream>

class Parent
{
public:
    Parent() = default;
    Parent(const Parent &) = delete;            // disabled copy constructor
    Parent(Parent &&) = delete;                 // enabled move constructor brand new in C++11
    Parent &operator=(const Parent &) = delete; // disabled assignment operator
    Parent &operator=(Parent &&) = delete;      // enabled assignment move operator brand new in C++11
    ~Parent() = default;

    virtual void AadarshBsdk()
    {
        std::cout << "Aadarsh BSDK hai\n";
    }
};
class Child : public Parent
{
public:
    Child() = default;
    Child(const Child &) = delete;            // disabled copy constructor
    Child(Child &&) = delete;                 // enabled move constructor brand new in C++11
    Child &operator=(const Child &) = delete; // disabled assignment operator
    Child &operator=(Child &&) = delete;      // enabled assignment move operator brand new in C++11
    ~Child() = default;

    void AadarshBsdk()
    {
        std::cout << "Ajit BSDK hai\n";
    }
};

int main(int argc, char const *argv[])
{
    // Parent *p = new Child();

    // Child * c=new Parent();

    Parent *p1 = new Parent();
    Child *c1;
    try
    {
        /* code */
        c1 = dynamic_cast<Child *>(p1); // fails
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
