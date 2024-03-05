#ifndef BUSINESSOWNER_HPP
#define BUSINESSOWNER_HPP

#include <iostream>
class BusinessOwner
{
    std::string name;
    std::string gstNumber;
    float revenue;
    float expenses;

public:
    BusinessOwner() = delete;

    BusinessOwner(const BusinessOwner &) = delete; // disabled copy constructor

    BusinessOwner(BusinessOwner &&) = delete; // enabled move constructor brand new in C++11

    BusinessOwner &operator=(const BusinessOwner &) = delete; // disabled assignment operator

    BusinessOwner &operator=(BusinessOwner &&) = delete; // enabled assignment move operator brand new in C++11

    ~BusinessOwner() = default;

    float calculateTaxAmount();
    BusinessOwner(std::string name_, std::string gstNumber_, float revenue_, float expenses_);

    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }

    std::string getGstNumber() const { return gstNumber; }
    void setGstNumber(const std::string &gstNumber_) { gstNumber = gstNumber_; }

    float getRevenue() const { return revenue; }
    void setRevenue(float revenue_) { revenue = revenue_; }

    float getExpenses() const { return expenses; }
    void setExpenses(float expenses_) { expenses = expenses_; }
};

#endif // BUSINESSOWNER_HPP
