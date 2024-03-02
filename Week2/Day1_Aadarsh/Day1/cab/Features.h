#ifndef FEATURES_H
#define FEATURES_H
#include<vector>
#include "Account.h"
using AccountContainer =std::vector<Account*>;

/* 
    should accept reference of a container
    an enum to decide type of account
    then accept input call the constructor and store pointer 
    in accountcontainer
*/
static CreateObject(AccountContainer& accounts, AccountType accountType);

#endif // FEATURES_H
