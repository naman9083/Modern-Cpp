#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>

/*
    Threads
        std::thread : They can be used for parallel/concurrent tasks. They need to be joined or detached.
        They do not catch the return values.

        std::condition_variable : In situations where one thread has to wait for an event to happen because of some thread before completing. Due to other operations, such threads may do some work before the event, hence are launched simultaneously.

        container of std::thread : To manage multiple instances std::thread eficiently. (map to functions, join, etc);

        std::mutex v/s std::lock_gaurd v/s std::unique_lock
            - std::mutex can be locked and unlocked manually ONLY!
            - std::lock_gaurd : (Mutex who completed masters!) scope based / RAII principle following mutex. No manual LOCK/UNLOCK
            - std::unique_lock : Scope based as well as manual lock/unlock.



*/

#include <future>

void factorial(std::future<int> &ft,int a)
{
    long long *ptr = (long long *)malloc(4); // line can be executed before int
    // wait for event
    long long n = ft.get();
    long long result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    *ptr = result;
    std::cout << "Final answer is: " << *ptr << "\n";
    free(ptr);
}

int main()
{
    // make a promise: compiler, I will give you an integer IN FUTURE
    //  (&factorial, )

    std::promise<int> pr;
    std::future<int> ft = pr.get_future();
    int a = 10;
    std::future<void> result = std::async(&factorial, std::ref(ft), a);

    int value = 0;
    std::cin >> value;

    pr.set_value(value);

    result.wait();

    
    
    return 0;
}
