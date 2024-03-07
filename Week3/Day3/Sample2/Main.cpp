#include <thread>
#include <future>
#include "Functionalities.hpp"

int main()
{

    Container c;
    // createObjects(c);
    std::thread t1(createObjects, std::ref(c));
    t1.join();

    try
    {
         

        std::future<int> ans = std::async(TotalHorsePower,std::ref(c));
        std::future<float> ans2 = std::async(AverageEngineTorque, std::ref(c));
        std::future<std::string> ans3 = std::async(FindCarModelById,std::ref(c),"c101");
        std::future<bool> flag = std::async(isContainerAllCarAbove700000,std::ref(c));
        std::future<Engine *>e = std::async(EnginePointerToMinPriceCar,std::ref(c));


        std::cout << "Total horsepower is: " << ans.get() << "\n";
        std::cout << "Average Torque is: " << ans2.get() << "\n";
        std::cout << "Model for given id is: " << ans3.get() << "\n";

        if (flag.get())
        {
            std::cout << "All cars have price are above 7lakhs\n";
        }
        else
            std::cout << "Some cars have price less than or equal to 7lakhs\n";

        std::cout << "Engine details are: " << *(e.get());

        deleteObjects(c);
    }
    catch(std::future_error &ex){
        if(ex.code()==std::future_errc::no_state){
            std::cerr<<"Missing Input/Output\n";
        }
        if(ex.code()==std::future_errc::future_already_retrieved){
            std::cerr<<"You already fetched the value don't try agian\n";
        }
    }
    
    catch(const std::exception &e){
        std::cerr << e.what() << "\n";
    }


    return 0;
}