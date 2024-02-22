#include <iostream>
#include "Functionalities.hpp"

int main()
{

    Container c;
    createObjects(c);

    try
    {
        int ans = TotalHorsePower(c);
        std::cout << "Total horsepower is: " << ans << "\n";
        float ans2 = AverageEngineTorque(c);
        std::cout << "Average Torque is: " << ans2 << "\n";
        std::string ans3 = FindCarModelById(c, "c101");
        std::cout << "Model for given id is: " << ans3 << "\n";

        bool flag = isContainerAllCarAbove700000(c);
        if (flag)
        {
            std::cout << "All cars have price are above 7lakhs\n";
        }
        else
            std::cout << "Some cars have price less than or equal to 7lakhs\n";

        Engine *e = EnginePointerToMinPriceCar(c);
        std::cout << "Engine details are: " << *e;

        deleteObjects(c);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}