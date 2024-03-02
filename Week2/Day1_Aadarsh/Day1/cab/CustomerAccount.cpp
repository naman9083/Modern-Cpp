#include "CustomerAccount.h"

std::ostream &operator<<(std::ostream &os, const CustomerAccout &rhs) {
    os << "_fullName: " << rhs._fullName;
    std::string val="";
    if(rhs._customerType==Gender::MALE)
    {
        val="MALE";
    }
    else if(rhs._customerType==Gender::OTHER)
    {
        val="OTHER";
    }
    else
    {
        val="FEMALE";
    }

       os<< " _customerType: " << val;
    return os;
}

CustomerAccout::CustomerAccout(std::string uname,std::string fullName, Gender customerType)
   :Account(uname), _fullName{fullName} , _customerType{customerType} {
}
void CustomerAccout::RegisterAccount(){
    std::cout<<"Registration Done"<<"\n";
};
