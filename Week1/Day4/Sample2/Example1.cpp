#include <iostream>
#include <memory>

class Example1
{
private:
    std::string name;
    int id;

public:
    Example1(int id_, std::string name_) : id{id_}, name{name_} {}
    ~Example1() {}
};
void DummyObject()
{
    std::shared_ptr<Example1> sptr{std::make_shared<Example1>(219415,"Naman")};

    int n1{10};
    std::cin >> n1;
    std::cout << 10 / n1;
    // delete ex1;
}
int main()
{

    try
    {
        DummyObject();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

/*

    Dummy() ------------------------------------------------>[  219415 |  Naman ]
                                                                0x100H

    ex1     |
    [  0x100H  ]
    <--8Bytes-->

    n1
    [     0     ]
    <---4bytes--->
 */

/*
    data : pointer ex1
    function whhich is garanteed to execute each time an object us destroyed: destructor
    action before data ex1 is destroyed: heap deallocation using delete ex1


 */

/*

    Smart Pointers in Modern CPP:
        1) Unque Pointer
        2) Shared Pointer
        3) Weak Pointer (token which can convert to shared ptr)
 */