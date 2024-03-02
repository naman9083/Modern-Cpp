
#include <vector>
#include <functional> //supports for functional programming

#include <memory>
#include <iostream>

// the square bracket is used to create lambda closure 
// also called as capture close
class LambdaImplementation
{
    int _number; // to be discussed!

public:
    LambdaImplementation() = default;
    LambdaImplementation(const LambdaImplementation &) = delete;            // disabled copy constructor
    LambdaImplementation(LambdaImplementation &&) = delete;                 // enabled move constructor brand new in C++11
    LambdaImplementation &operator=(const LambdaImplementation &) = delete; // disabled assignment operator
    LambdaImplementation &operator=(LambdaImplementation &&) = delete;      // enabled assignment move operator brand new in C++11
    ~LambdaImplementation() = default;

    // function call () operator [paren paren]

    void operator()(std::vector<int> &arr, std::function<void(int)> fn)
    {
        for (int i : arr)
        {
            fn(i);
        }
    }
};

int main(int argc, char const *argv[])
{

    std::shared_ptr<LambdaImplementation> ptr = std::make_shared<LambdaImplementation>();
    LambdaImplementation l1;
    std::function /* auto */ temp = [&](int a) -> void
    {
        std::cout << a << " ";
    };

    std::vector<int> arr{10, 20, 30, 40, 50};
    l1(arr, temp);
    std::cout << "\n";
    (*ptr)(arr, temp);
    std::cout << "\n";
    return 0;
}
