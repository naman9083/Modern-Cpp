#ifndef FEATURES_HPP
#define FEATURES_HPP
#include <vector>
#include <memory>

#include "Account.hpp"
#include "AccountType.hpp"

using AccountPtr = std::shared_ptr<Account>;
using AccountContainet = std::vector<AccountPtr>;

#include <iostream>
class Features
{
public:
    Features() = delete;

    Features(const Features &) = delete; // disabled copy constructor

    Features(Features &&) = delete; // enabled move constructor brand new in C++11

    Features &operator=(const Features &) = delete; // disabled assignment operator

    Features &operator=(Features &&) = delete; // enabled assignment move operator brand new in C++11

    ~Features() = default;

    void createAccount();

    /*
    should accept reference of a container,
    an enum to decide type of account,
    then accept input, call the correct constructor and store pointer
    in accountContainer
 */

    static void createObjects(AccountContainet &accounts, AccountType aType);
};
#endif // FEATURES_HPP
