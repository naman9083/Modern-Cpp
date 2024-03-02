#include "CustomerAccount.hpp"

CustomerAccount::CustomerAccount(std::string username, std::string _fullName, Gender _gender) : Account(username), fullName{_fullName}, gender{_gender}
{
}

void CustomerAccount::registerAccount()
{
    std::cout << "Customer account is verified\n";
}

std::ostream &operator<<(std::ostream &os, const CustomerAccount &rhs)
{
    os << static_cast<const Account &>(rhs)
       << " fullName: " << rhs.fullName << "\n";
    switch (rhs.gender)
    {
    case Gender::MALE:
        std::cout << "Gender: Male\n";
        break;
    case Gender::FEMALE:
        std::cout << "Gender: Female\n";
        break;
    case Gender::OTHERS:
        std::cout << "Gender: Others\n";
        break;

    default:
        break;
    }
    return os;
}
