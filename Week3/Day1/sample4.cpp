#include <iostream>
#include <stdexcept>
#include <iostream>
#include <mutex>
#include <thread>
int amount = 1000;
std::mutex m1;

void withdraw()
{
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        amount -= 10;
    }
}

void deposit()
{
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        amount += 10;
    }
}

int main(int argc, char const *argv[])
{
    std::thread t1(&withdraw);
    std::thread t2(&deposit);

    t1.join();
    t2.join();

    std::cout << "Amount is: " << amount << "\n";
    return 0;
}
