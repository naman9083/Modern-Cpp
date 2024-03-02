#include <iostream>
#include <vector>
#include <thread>

void square(const std::vector<int>& numbers)
{
    for (int number : numbers){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Square of: " << number << " is:" << number * number << "\n";
    }
}

void cube(const std::vector<int>& numbers)
{
    for (int number : numbers){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Cube of: " << number << " is:" << number *number * number << "\n";
    }
}

int main(int argc, char const *argv[])
{
    std::vector<int> vc={1,2,3,4,5};
    square(vc);
    cube(vc);

    return 0;
}
