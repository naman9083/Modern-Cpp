#include "Bank.hpp"

BankingOperations::BankingOperations(unsigned int amount_) : amount{amount_} {}

void BankingOperations::withdraw()
{
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        std::lock_guard<std::mutex> lk(mt);
        amount -= 10;
    }
}

void BankingOperations::deposit()
{
    for (int i = 0; i < 100; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        std::lock_guard<std::mutex> lk(mt);
        amount += 10;
    }
}

BankingOperations *BankingOperations::getFirstInstance(int amount)
{
    if (soloHeroObj)
        return soloHeroObj;
    else{
        soloHeroObj = new BankingOperations(amount);
        return soloHeroObj;
    }
    
}

BankingOperations *BankingOperations::soloHeroObj = nullptr;