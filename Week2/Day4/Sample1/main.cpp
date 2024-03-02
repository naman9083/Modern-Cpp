#include "Functionalities.hpp"


int main(int argc, char const *argv[])
{
    Container data{1, 2, 3, 4, 5, 6};
    try
    {
        adaptor(fnTyp1, data);
        adaptor(fnTyp2, data);
        adaptor(fnTyp3, data);
      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
