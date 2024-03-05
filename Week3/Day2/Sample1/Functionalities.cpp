#include "Functionalities.hpp"

void CommonAction(Container &arr)
{
    for(Vtype v:arr){
        std::visit(
            [](auto &&value/* Template parameter for lambda */)
            {
                std::cout << value->getName()<<"\n";
            },
            v);
    }
}

/*
        For each Vtype(variant) called "v"
        a) Open variant and check if v holds an alternative of type BusinessOwner*
        b) If yes, get the slot of the BusinessOwner that is 1 
        Now, save this to a variable and acess revenue
*/

void UnCommonAction(Container &con)
{
    for(Vtype v:con){
        if(std::holds_alternative<BusinessOwner*>(v)){
            BusinessOwner* ow = std::get<1>(v);
            std::cout << ow->getRevenue() <<"\n";
        }
    }
}
