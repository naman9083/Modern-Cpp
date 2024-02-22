#include <iostream>

class Parent
{

public:
    Parent(/* args */) {}
    virtual ~Parent() {}

    virtual void magic() = 0;
};
class Child : public Parent
{

public:
    Child(/* args */) {}
    ~Child() {}

    void childDisplay()
    {
        std::cout << "Child Display\n";
    }

    void magic() override
    {
        std::cout << "Magic happens in Child\n";
    }
};
int main(int argc, char const *argv[])
{

    // TYPE 2: CAST WHEN PARENT-CHILD RUNTIME POLYMORPHISM IS IN PICTURE
    //   2A: CONVERTING REFERENCE

    //  2B: COVERTING POINTER
    /* Parent *ptr = new Child(); // upcasting
    ptr->magic();
    Child *c;
    if (dynamic_cast<Child *>(ptr))
    {
        c = dynamic_cast<Child *>(ptr);
    }
    c->childDisplay();
    //if you want to use dynamic one function should be virtual in polymorphic class

    */

    Parent *p1 = new Child();

    try
    {
        Child &ch = dynamic_cast<Child &>(*p1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
