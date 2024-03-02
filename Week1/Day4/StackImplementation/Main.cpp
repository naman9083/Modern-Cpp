#include <iostream>
#include "Stack.hpp"

int main()
{

    Stack<int> st;
    try
    {
        std::cout << st.Top() << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
