
/*
    Account Id: unsigned long
    static counter
    _userusername
*/
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
class Account
{

    std::string username;
    unsigned long id;
    static unsigned long counter;

public:
    Account() = delete;

    Account(const Account &) = delete; // disabled copy constructor

    Account(Account &&) = delete; // enabled move constructor brand new in C++11

    Account &operator=(const Account &) = delete; // disabled assignment operator

    Account &operator=(Account &&) = delete; // enabled assignment move operator brand new in C++11

    ~Account() = default;

    virtual void registerAccount() = 0;

    std::string getusername() const { return username; }
    void setusername(const std::string &username_) { username = username_; }

    unsigned long getId() const { return id; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);

    explicit Account(std::string username);
};


#endif // ACCOUNT_HPP
