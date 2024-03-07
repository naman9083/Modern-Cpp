#include <iostream>
#include <future>

// a function to take an future Of Int and return a future of int
int add(std::future<int> &f)
{
    int x = f.get();

    return x + 2;
}
int main()
{
    std::promise<int> p;
    std::future<int> f = p.get_future();
    std::future<int> fu = std::async(add, std::ref(f));
    p.set_value(2);
    std::cout << fu.get() << std::endl;

    return 0;
}
