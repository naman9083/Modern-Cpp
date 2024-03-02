#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include "Gender.hpp"
#include "Account.hpp"

class CustomerAccount : public Account
{
    std::string fullName;
    Gender gender;

public:
    CustomerAccount() = delete;

    CustomerAccount(const CustomerAccount &) = delete; // disabled copy constructor

    CustomerAccount(CustomerAccount &&) = delete; // enabled move constructor brand new in C++11

    CustomerAccount &operator=(const CustomerAccount &) = delete; // disabled assignment operator

    CustomerAccount &operator=(CustomerAccount &&) = delete; // enabled assignment move operator brand new in C++11

    ~CustomerAccount() = default;

    CustomerAccount(std::string username_, std::string _fullName, Gender _gender);
    std::string getFullName() const { return fullName; }
    void setFullName(const std::string &fullName_) { fullName = fullName_; }

    Gender getCustomer() const { return gender; }
    void setCustomer(const Gender &customer_) { gender = customer_; }

    friend std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs);

    void registerAccount() override;
};

#endif // CUSTOMER_HPP
