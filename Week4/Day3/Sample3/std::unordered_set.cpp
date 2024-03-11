#include <iostream>
#include <unordered_set>

int main()
{

    std::unordered_set<int> s1{12, 12, 11, 13, 11, 13, 11, 14};

    s1.insert(11).second ? std::cout << "Element added\n" : std::cout << "Not added\n";

    return 0;
}
