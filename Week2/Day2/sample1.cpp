#include <iostream>
#include <functional>

void blackMagic(std::function<void(int)> fn)
{
    fn(10);
}

/*
    The actual data type of a lambda is unknown
*/

class Function_Wrapper
{
public:
    Function_Wrapper();
    ~Function_Wrapper();

    void operator()(std::function<void(int)>)
    {
        
    }

private:
};

int main(int argc, char const *argv[])
{
    auto f1 = [](int number)
    {
        std::cout << number * 10 << std::endl;
    };

    blackMagic([](int number)
               { std::cout << number * 10 << std::endl; });

    return 0;
}
