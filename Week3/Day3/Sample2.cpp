/*
    Objective:

    Design a consumer for:
        - making allocations on the heap for 10 integers.
        - Save Square of first 1- integers on the heap storage created.
        - calculating sum of first N natural numbers, where N is accepted asynchrnounsly in the function and return the value Producer thread for:
        - Launching a consumer Accepting N and passing to consumer

*/

#include <iostream>
#include <future>

int consumer(std::future<int> &ft)
{
    int *ptr = (int *)malloc(40);
    auto f1 = [](int number)
    {
        return number * number;
    };

    for (int i = 1; i <= 10; i++)
        ptr[i - 1] = f1(i);
    for (int i = 0; i < 10; i++)
    {
        std::cout << ptr[i] << "\n";
    }

    int n = ft.get();
    return (n * (n + 1)) / 2;
}
int main()
{
    std::promise<int> pr;
    std::future<int> ft = pr.get_future();

    std::future<int> result = std::async(&consumer, std::ref(ft));

    int value = 0;
    std::cin >> value;

    pr.set_value(value);

    std::cout << "The answer is: " << result.get() << "\n";

    return 0;
}

/*
    You can use "get" command one time on one future object
    Normal exceptions does not work with future objects, only future exceptions work with future objects
*/