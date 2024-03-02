#ifndef BANK_HPP
#define BANK_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <array>
class BankingOperations
{
    unsigned int amount{0};
    std::mutex mt;
    BankingOperations(unsigned int amount_);

    ~BankingOperations() = default;
    static BankingOperations *soloHeroObj;

public:
    BankingOperations() = delete;
    BankingOperations(const BankingOperations &) = delete; // disabled copy constructor

    BankingOperations(BankingOperations &&) = delete; // enabled move constructor brand new in C++11

    BankingOperations &operator=(const BankingOperations &) = delete; // disabled assignment operator

    BankingOperations &operator=(BankingOperations &&) = delete; // enabled assignment move operator brand new in C++11

    void withdraw();

    void deposit();

    unsigned int getAmount() const { return amount; }
    void setAmount(unsigned int amount_) { amount = amount_; }

    static BankingOperations *getFirstInstance(int amount);
};

#endif // BANK_HPP
