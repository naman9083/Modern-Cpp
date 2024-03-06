#include <iostream>
#include <thread>
#include <mutex>

int count = 1;
int total = 0;

std::mutex mt;
void magic(int n1)
{
    std::lock_guard<std::mutex> lk(mt);
    total = total + n1;
    count++;
}
int main()
{

    // std::future<int> res = std::async(std::launch::async, magic);
    // std::
    //         cout
    //     << res.get();
    // std::thread t1([]()
    //                { std::cout << "Hello\n"; });
    // t1.join();
    std::thread t1[8];
    for (int i = 0; i < 8; i++)
    {
        t1[i] = std::thread(magic, std::ref(count));
    }
    for (int i = 0; i < 8; i++)
    {
        if (t1[i].joinable())
            t1[i].join();
    }
    std::cout << total << "\n";
    
    return 0;
}