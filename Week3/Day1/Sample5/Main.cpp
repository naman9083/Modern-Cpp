#include "Bank.hpp"

int main(int argc, char const *argv[])
{
    BankingOperations *b1=BankingOperations::getFirstInstance(1000);
    std::array<std::thread, 2> arr = {std::thread(&BankingOperations::withdraw, b1), std::thread(&BankingOperations::deposit, b1
    )};

    for (std::thread &a:arr)
        if(a.joinable())
            a.join();

    std::cout << b1->getAmount()<<"\n";

    return 0;
}
