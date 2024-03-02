#include "Account.h"
unsigned long Account::_count=100;

Account::Account(std::string username)
:_username{username},_id{_count++}{}

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "_id: " << rhs._id
       << " _username: " << rhs._username;
    return os;
}
