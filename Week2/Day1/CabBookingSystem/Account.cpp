#include "Account.hpp"

unsigned long Account::counter = 10000;

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "name: " << rhs.username
       << " id: " << rhs.id;
    return os;
}

Account::Account(std::string name_):username{name_},id{++counter}
{
    
}
