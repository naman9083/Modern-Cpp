#include <iostream>
#include <thread>
#include <condition_variable>

/*
    Producer consumer problem!
    2 workers in your program
        1_ May produce "something"
        the other will "consume it"(process the produced item)


*/

/*
    2 Threads (2 workers)
        - main thread(producer): take input and "make value available"

        - operation(t1)[consumer]: Once signal is received from the main to indicate "input" value  received,     calculate the square

            a)Programmers calculates how many workers are required  and trigeers them at a time [thread pooling]

            b)t1 may want to do some other works even before data input is received

*/
int value = 0;

std::mutex mt;
std::condition_variable cv;
bool flag = false;
void operation()
{
    int *ans = (int *)malloc(4);
    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul, [&]()
            { return flag; });

    *ans = value * value;
    std::cout
        << "Square of " << value << " is: " << *ans;
    std::cout << "\n";

    free(ans);
}

void TakeInput()
{
    std::lock_guard<std::mutex> lg(mt);

    // TAKE INPUT FROM USER INTO GLOBAL VARIABLE
    std::cin >> value;
}

int main()
{
    // thread instantiated .
    // a new thread  is now available to be scheduled. (as good as already started)
    
    std::thread t1(&operation);
    std::thread t2(&TakeInput);

    // apply lock on mutex. Lock will applied till end of main
    //  NO OTHER THREAD CAN APPLY LOCK ON THE SAME MUTEX BEFORE MAIN

    flag = true;
    cv.notify_one();

    t1.join();
    t2.join();
    return 0;
}