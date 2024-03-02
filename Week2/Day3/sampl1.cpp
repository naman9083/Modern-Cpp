#include <iostream>
#include <functional>
#include <list>
#include <cstring>

/*
    1) We cannot massively chnage after it is deployed for client
    2) Sometimes API parameters needs to be fixed at a certain value

*/

void Formula(const int x, const int y, const int z)
{
    std::cout << "Answer is: " << x + y - z << std::endl;
}

void Magic(const std::list<int> &data, int n)
{
    for (int val : data)
    {
        n--;
        if (n == 0)
            std::cout << val << "\n";
    }
}

int main(int argc, char const *argv[])
{
    // Connect (ip,port,hostname,id,password
    Formula(98, 89, 7);
    // set the value of x in formula  to 100 fixed forever!

    auto binded_formula = std::bind(&Formula, 100, std::placeholders::_1, std::placeholders::_2);

    binded_formula(30, 40); // x = 100, y = 30, z = 40

    auto binded_Magic = std::bind(&Magic, std::placeholders::_2, std::placeholders::_1);

    auto bindedStrcpy = std::bind(&strcpy, std::placeholders::_2, std::placeholders::_1);

    char *c=new char[5];

    bindedStrcpy("Naman", c);

    std::cout << c << std::endl;

    auto fn = [](int number, int factor)
    {
        std::cout << number * factor<<"\n";
    };

    auto binded_lambda_fn = std::bind(fn, std::placeholders::_1, 40);

    binded_lambda_fn(10);

    binded_lambda_fn(10,20,30,40,50,60);



    /*
        void Magic(const int n1,std::string& name)
        std::function<void(const int n1,std::string &name)>  fn = &Magic
    */




    return 0;
}
