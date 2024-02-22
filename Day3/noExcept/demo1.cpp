#include <iostream>

#define endl "\n"
class Dummy
{
private:
public:
    Dummy() noexcept {}
    static void display() noexcept
    {
        std::cout<<"Hello"<<10/0<<endl;
    }
    ~Dummy() {}
};
int main()
{
    Dummy::display();
    return 0;
}