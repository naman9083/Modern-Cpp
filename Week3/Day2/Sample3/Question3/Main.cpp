
#include "Functionalities.hpp"

int main()
{
    VContainer con;

    // fnCon fns;
    // buildFnConainer(fns);
    // ThreadContainer ths;
    // adaptor(ths, fns, con);
    // for(const Fn&f:fns)
    //     ths.push_back(std::thread(f,std::ref(con)));
    createObjects(con);
    
    std::thread t1(printDetails, std::ref(con));
    std::thread t2(printHighestMileage, std::ref(con));

    t1.join();
    t2.join();

    return 0;
}