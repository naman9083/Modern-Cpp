
#include "Functionalities.hpp"

int main()
{
    Employee *emp = new Employee(20000.0f, "TANZ");
    BusinessOwner *own = new BusinessOwner("KPIT", "GSTIN123456", 9876234.0f, 8765423.0f);
    std::array<Vtype,2> arr = {emp, own};

    CommonAction(arr);
    UnCommonAction(arr);

    /*
        Scenario 1: I want to execute a function that is present in all types of the variant 
        e.g getters setters of name

        Scenario 2: I want to call a function that only exists in some but not all 
        
    */
    return 0;
}
