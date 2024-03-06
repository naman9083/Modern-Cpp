#include <iostream>
#include <future>

int magic()
{
    std::cout << "Magic\n";
    return 100;
}
int main()
{

    std::future<int> res = std::async(std::launch::async, magic);
    std::
            cout
        << res.get();
    // std::thread t1([]()
    //                { std::cout << "Hello\n"; });
    // t1.join();
    return 0;
}