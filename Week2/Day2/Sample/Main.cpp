#include "Functionalities.hpp"

int main(int argc, char const *argv[])
{
    TouristContainer c;
    PermitContainer p;
    createObject(p);
    createObject(c, p);

    try
    {
        std::cout << "First N vehicle with given conditions are: \n";
        TouristContainer t = firstN(c, 3);
        for (const TouristVehiclePtr &ptr : t)
        {
            std::cout << *ptr;
        }
        float averageBook = averageBookingCharge(c, TouristVehicleType::DEFAULT);
        std::cout << "Average Booking Charge of BUS: " << averageBook << "\n";

        std::cout << "Serial number of vehicle with maximum booking charge: " << returnSerialNumberWithMaxBookingCharge(c) << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
