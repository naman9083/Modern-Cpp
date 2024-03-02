#include <iostream>
#include <vector>
#include <functional>
#include <math.h>
/*
Objective : Design a adapter function that accepts a container of function wrappers and a container of data values Map each function on each item in the data container and print the output
All functions must be accepted only an integer and return void
*/
using FnType = std::function<void(int)>;
using DataContainer = std::array<int, 5>;
using FnContainer = std::array<FnType, 3>;
// void Adaptor(std::function<int(int)> fn, std::vector<int> vc)
// {

//     for (int a : vc)
//         std::cout << fn(a) << "\n";
// }

void Adaptor(const FnContainer &fns, const DataContainer &data)
{
    // loop over fns
    // nested loop over data, apply fn on data
    for (const FnType fn : fns)
    {
        for (int val : data)
        {
            fn(val);
        }
    }
}
void blackMagic(std::reference_wrapper<int> a);
int main(int argc, char const *argv[])
{

    /* std::vector<int> c{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    Adaptor([](int i)
            {
                if (i % 2 == 0)
                {
                    return i;
                }
                else
                {
                    return -1;
                }
            },
            c); */
    FnContainer fData{
        [](int number)
        {
            std::cout << "Given array element "<<number<< " by 10: ";
            std::cout << number * 10 << "\n";
        },



        [](int number)
        {
            std::cout << "Given square of " << number << " array element: ";
            std::cout << number * number << "\n";
        },


        [](int number)
        {
            std::cout << "Given square root of " << number << " array element: ";
            std::cout << std::sqrt(number) << "\n";
        },



    };
    // Adaptor(fData, DataContainer{10, 20, 30, 40, 50});
    int a = 10;

    std::reference_wrapper<int> b = a;
    blackMagic(b);
    std::cout << a;
    return 0;
}
void blackMagic (std::reference_wrapper<int> a) {
    a.get() = 20;
}

/* 

*/