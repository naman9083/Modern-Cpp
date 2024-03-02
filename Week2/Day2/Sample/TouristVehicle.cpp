#include "TouristVehicle.hpp"

TouristVehicle::TouristVehicle(std::string number_, TouristVehicleType vehicleType_, unsigned int seatCount_, float perHourBookingCharge_, PermitRef permit_) : number{number_}, vehicleType{vehicleType_}, seatCount{seatCount_}, perHourBookingCharge{perHourBookingCharge_}, permit{permit_}
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs)
{
    os << "Number: " << rhs.number << "\n"
       << "VehicleType: ";
    switch (rhs.vehicleType)
    {
    case TouristVehicleType::CAB:
        os << "CAB\n";

        break;
    case TouristVehicleType::BUS:
        os << "BUS\n";

        break;
    case TouristVehicleType::BIKE:
        os << "BIKE\n";

        break;
    default:
        break;
    }
    os << "SeatCount: " << rhs.seatCount << "\n"
       << "PerHourBookingCharge: " << rhs.perHourBookingCharge << "\n"
       << "Permit: " << rhs.permit << "\n";
    return os;
}
