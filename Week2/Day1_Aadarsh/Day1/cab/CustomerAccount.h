#ifndef CUSTOMERACCOUNT_H
#define CUSTOMERACCOUNT_H

#include<iostream>
#include "Gender.h"
#include "Account.h"
class CustomerAccout:public Account
{
private:
    std::string _fullName;
    Gender _customerType;
public:
    CustomerAccout()=delete;
    ~CustomerAccout()=default;
    CustomerAccout(const CustomerAccout&)=delete;
    CustomerAccout(CustomerAccout&&)=delete;
    CustomerAccout& operator =(const CustomerAccout&)=delete;
    CustomerAccout& operator =(CustomerAccout&&)=delete;

    CustomerAccout(std::string uname,std::string fullName, Gender customerType);

    std::string fullName() const { return _fullName; }
    void setFullName(const std::string &fullName) { _fullName = fullName; }

    Gender customerType() const { return _customerType; }
    void setCustomerType(const Gender &customerType) { _customerType = customerType; }

    friend std::ostream &operator<<(std::ostream &os, const CustomerAccout &rhs);
    void RegisterAccount() override;

};

#endif // CUSTOMERACCOUNT_H
