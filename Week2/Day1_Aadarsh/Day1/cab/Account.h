#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
class Account
{
private:
    unsigned long _id;
    static unsigned long _count;
    std::string _username;
public:
    Account()=delete;
    ~Account()=default;
    Account(const Account&)=delete;
    Account(Account&&)=delete;
    Account& operator =(const Account&)=delete;
    Account& operator =(Account&&)=delete;

    virtual void RegisterAccount()=0;   //pure vitual function
    explicit Account(std::string username);

    std::string username() const { return _username; }
    void setUsername(const std::string &username) { _username = username; }

    int id() const { return _id; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
    
};

#endif // ACCOUNT_H
