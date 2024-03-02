#include <iostream>
#include <functional>
std::function<int()> fn(int n1, int n2)
{
    /*  */

    auto lamnda_fn = [&]()
    {
        int val = 99;
        return n1 + n2 + 10 + 20 + val;
    };
    
    return lamnda_fn;
}

void f2(int n1, int n2)
{
    /*
        A lambda can capture data from its enclosing function without explicit passing
        Capture by reference
        & ----------> Capture by Reference
        = ----------> Capture by value

    */
    auto lambda_fn = [&/* = */]()
    {
        return n1 + n2;
    };

    std::cout << lambda_fn() << "\n";
}
void f1()
{
    int n1 = 10;
    int n2 = 20;
    f2(n1, n2);
}


std::function<void()> trick(){
    int n1 = 100;
    int n2 = 200;
    auto f1 = [n1, &n2]() mutable
    {
        n1 = 199;
        n2 = 299;
        
    };
    std::cout << "n1: " << n1 << "\nn2: " << n2 << "\n";
    return f1;
}

int main(int argc, char const *argv[])
{
    int n1 = 10, n2 = 20;
    auto modified = fn(n1, n2);
    // std::cout << modified()/* fn(n1, n2)() */ << "\n";

    
    return 0;
}

/*

    Main fn stack memory

    f1 stack memory

    n1          n2
   [10]         [20]
   0x76         0x0H


    lambda function

    [n1     n2]
    [10]    [20]

    0x77H


    void Magic(){
        int n1=20,n2=10;
        example 1: all data values from "enclosing function"
                are accessible inside f1
        auto f1 =[&](){
            return n1+n2;
        }


        example 2: selected data values capture by copy
        auto f1 = [n1](){
            return n1+n2;
        }
        only n1 is accessible, n2 is not. we will get error


        example 3: selected data values capture by copy
        auto f1 = [n1,n2](){
            return n1+n2;
        }

        both are accessible

        example 4: all data values by reference
        auto f1 = [&n1,&n2](){
            return n1+n2;
        }

        both are accesible as references

        example 5: all data valeye capture by copy

        auto f1 = [=] (){
            return n1+n2+n3;
        }


        n1,n2,n3 are accessible by copy

        example5: some as refernces and some as value/copy

        auto f1 = (n1,&n2,n3){
            return n1+n2+n3;
        }

        all acccessible, but n2 is captured by references and rest are captured by value




    }







*/