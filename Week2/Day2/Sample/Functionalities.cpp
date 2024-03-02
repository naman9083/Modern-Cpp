#include "Functionalities.hpp"



void createObject(PermitContainer &data)
{
    data.push_back(std::make_shared<Permit>("UP11AF4089", PermitType::OWNED, 20));
    data.push_back(std::make_shared<Permit>("UP15AZ9085", PermitType::OWNED, 80));
    data.push_back(std::make_shared<Permit>("JK02AF2076", PermitType::LEASE, 10));
    data.push_back(std::make_shared<Permit>("PB09A8776", PermitType::OWNED, 60));
    data.push_back(std::make_shared<Permit>("HR078765", PermitType::LEASE, 48));
    data.push_back(std::make_shared<Permit>("MH11987", PermitType::OWNED, 36));
}

void createObject(TouristContainer &data)
{
}

// void createObject(TouristContainer &data)
//{
//
//     data.push_back(std::make_shared<TouristVehicle>("ABCD1234", TouristVehicleType::BIKE, 2, 30.0, std::make_shared<Permit>("UP11AF4089", PermitType::OWNED, 20)));
//     data.push_back(std::make_shared<TouristVehicle>("EFGH5678", TouristVehicleType::CAB, 4, 60.0, std::make_shared<Permit>("UP15AZ9085", PermitType::OWNED, 80)));
//     data.push_back(std::make_shared<TouristVehicle>("IJKL9012", TouristVehicleType::BUS, 30, 120.0, std::make_shared<Permit>("JK02AF2076", PermitType::LEASE, 10)));
//     data.push_back(std::make_shared<TouristVehicle>("MNOP3456", TouristVehicleType::BIKE, 2, 100.0, std::make_shared<Permit>("PB09A8776", PermitType::OWNED, 60)));
//     data.push_back(std::make_shared<TouristVehicle>("QRST7890", TouristVehicleType::CAB, 2, 200.0, std::make_shared<Permit>("HR078765", PermitType::LEASE, 48)));
//     data.push_back(std::make_shared<TouristVehicle>("UVWX1234", TouristVehicleType::BUS, 2, 300.0, std::make_shared<Permit>("MH11987", PermitType::OWNED, 36)));
// }

void createObject(TouristContainer &data, const PermitContainer &pData)
{
    data.push_back(std::make_shared<TouristVehicle>("ABCD1234", TouristVehicleType::BIKE, 2, 30.0, *pData[0]));
    data.push_back(std::make_shared<TouristVehicle>("EFGH5678", TouristVehicleType::CAB, 4, 60.0, *pData[1]));
    data.push_back(std::make_shared<TouristVehicle>("IJKL9012", TouristVehicleType::BUS, 30, 120.0, *pData[2]));
    data.push_back(std::make_shared<TouristVehicle>("MNOP3456", TouristVehicleType::BIKE, 2, 100.0, *pData[3]));
    data.push_back(std::make_shared<TouristVehicle>("QRST7890", TouristVehicleType::CAB, 5, 200.0, *pData[4]));
    data.push_back(std::make_shared<TouristVehicle>("UVWX1234", TouristVehicleType::BUS, 2, 300.0, *pData[5]));
}


TouristContainer firstN(const TouristContainer &data, int N)
{
    if (data.size() == 0)
        throw CustomException("Empty Data\n");
    if (N < 0 || N > data.size())
        throw CustomException("Invalid value\n");

    TouristContainer ans;
    int cnt = 0;
    for (const TouristVehiclePtr &tp : data)
    {
        if (tp->getSeatCount() >= 4 and tp->getPermit().get().getPType() == PermitType::LEASE )
        {
            ans.push_back(tp);
            cnt++;
            if(cnt>N)
                break;
        }
    }
    return ans;
}

float averageBookingCharge(const TouristContainer &data, TouristVehicleType type)
{
    if (data.size() == 0)
        throw CustomException("Empty Data\n");

    float ans = 0.0f;
    int cnt = 0;
    for (const TouristVehiclePtr &tp : data)
    {
        if (type == tp->getVehicleType())
        {
            ans += tp->getPerHourBookingCharge();
            cnt++;
        }
    }
    if (cnt == 0)
        throw CustomException("No such vehicle Found\n");
    return ans / cnt;
}

std::string returnSerialNumberWithMaxBookingCharge(const TouristContainer &data)
{
    if (data.size() == 0)
        throw CustomException("Empty Data\n");

    float maxBookingCharge = data[0]->getPerHourBookingCharge();
    std::string serialnum = data[0]->getPermit().get().getSerialNumber();

    for (const TouristVehiclePtr &tp : data)
    {
        if (tp->getPerHourBookingCharge() > maxBookingCharge)
        {
            maxBookingCharge = tp->getPerHourBookingCharge();
            serialnum = tp->getPermit().get().getSerialNumber();
        }
    }
    return serialnum;
}
