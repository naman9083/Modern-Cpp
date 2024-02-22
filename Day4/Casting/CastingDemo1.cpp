#include <iostream>

int main(int argc, char const *argv[])
{

    float f1 = 10.21f;
    int n1 = (float)f1; // cstyle cast
    std::cout << n1 << std::endl;

    // improved version

    // int n2 = static_cast<int>(f1); // enum to integer, primitive datatype
    int n2 = static_cast<int>('a');

    return 0;
}
