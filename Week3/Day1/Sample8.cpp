#include <iostream>
#include <array>
#include <unordered_map>
//structured binding
int main(int argc, char const *argv[])
{
    std::array<int, 2> data{101, 90000};
    std::unordered_map<int, std::string> map{
        std::make_pair(3, "Aadarsh"),
        std::make_pair(2, "Ajit"),
        std::make_pair(1, "Naman"),

    };
    for (const auto &[k, v] : map)
    {
        std::cout << "Key: " << k << " Value: " << v << "\n";
    }
    auto [empId, empSalary] = data;

    return 0;
}
