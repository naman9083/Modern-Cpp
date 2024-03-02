
// /*

//     f(x,y)
//     f of x,y

//     mathematician : function f is mapped to x & y
//     programmer : function f takes input of x & y

//     g(f(x,y)) is g(x) with y mapped or g(y) with x mapped
// */

// #include <functional>

// #include <iostream>
// void formula(int x, int y, int z)
// {
//     std::cout << ((x + y) - z);
// }

// struct Actor
// {
//     void DoSomethingYouUselessPerson(int x, int y, int z)
//     {
//         std::cout << ((x + y) - z);
//     }
// };

// void demo(int x, int &y)
// {
//     x++; // x has been copied into demo
//     y++; // we are using original data passed in 2nd position
// }

// using namespace std::placeholders;

// int main()
// {
//     int a = 10;
//     int b = 20;
//     auto binded_demo_fn = std::bind(&demo, a, std::ref(b));

//     binded_demo_fn();

//     std::cout << "Value of a is: " << a << "\n";

//     std::cout << "Value of a is: " << b << "\n";

//     // partial implementation of formula where x is set to 100 already

//     auto partial_formula_f1 = std::bind(&formula, 100, _2, _3); // x=100

//     partial_formula_f1(-1, 29, 45);                             //-1 is discarded, 29 is _2 (y) and 45 is _3 (z)
//                                                                 // /
//     auto partial_formula_f2 = std::bind(&formula, 100, _1, _2); // x=100

//     partial_formula_f2(50, 45);                                    // x is 100 (already), 50 is _1(y) and 45 is _2(z)
//     partial_formula_f2(50, 45, 50, 100, 200, 400, 40, 50, 60, 60); // x is 100 (already), 50 is _1(y) and 45 is _2(z)

//     //////////////////////

//     auto partial_formula_f3 = std::bind(&formula, _1, 100, _3);
//     partial_formula_f3(90, -1, 80); // formula (90, 100, 80);
//     /*
//         rules : formula has 3 parameters
//             _1 means x is left for user to decide
//                 : pick 1st value for x
//             100 means y is fixed to 100
//             _3 means z is left to the user
//                 : pick 3rd value for z
//     */

//     auto partial_function_swap = std::bind(&formula, _3, _2, _1);
//     /*
//        rules : formula has 3 parameters

//        _3 means x is decided by the user
//            : pick the 3rd parameter and map to x

//        _2 means y is decided by the user
//            : pick the 2nd parameter and map to y

//        _1 means z is decided by the user
//            : pick the 1st parameter and map it to z
//    */

//     Actor a1;
//     auto class_func_bind = std::bind(&Actor::DoSomethingYouUselessPerson, &a1, _3, _2, _1);
// }

// /*

//     bind does the following

//     a) fixes the value of one or more parameters of a function it partially
//     implements by using concept of placeholders and dedicated values
//     b) It can be used to switch the order of values passed by mapping
//     them in any sequence programmer desires
// */

#include <iostream>
#include <functional>

void adaptor(std::function<void(int)> &fn)
{


}

int add(int a, int b)
{
    return a + b;
}
int main(int argc, char const *argv[])
{

    int a = 10;
    std::reference_wrapper<int> b = a;

    auto a1 = std::reference_wrapper<int(int, int)>(add);

    std::cout << a1(10, 20) << "\n";

    std::reference_wrapper<int> z(b);

    z++;
    std::cout << a;

    std::cout << "\n";


    return 0;
}

// 5 5 5 5 5   ----->  MCQ's  ->  25%  -----> 10%   25% 50%
//     |--->60%
// 10 15 25 25 ----->  3Mini+Mega -> 75% ---> 50%

// 2 mcq ------> 50 55  5.25
// 1 Min ------> 100    10

// 1.25
// 2.5
