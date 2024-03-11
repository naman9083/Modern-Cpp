#include <iostream>
#include <optional>
#include <thread>
#include <condition_variable>
#include <variant>
#include <future>


/*
    Producer consumer problem!
    2 workers in your program
        1_ May produce "something"
        the other will "consume it"(process the produced item)
        So, we have 2 workers in our program
        */
// std::mutex mt;
// std::condition_variable cv;
// bool flag = false;
// int value = 0;
// void magic(int v)
// {
//     int *a= (int *)malloc(4);
//     std::unique_lock<std::mutex> ul(mt);
//     cv.wait(ul, [&]()
//             { return flag; });
//     *a = value * value;
//     std::cout << "Square of " << value << " is: " << *a;
//     std::cout << "\n";
//     free(a);


// }
// a function to use all the header libraris
int magic(std::future<int>& ft){

    int a  = ft.get();
    //doing some conditional variable use

    std::cout << "Square of " << a << " is: " << a * a;
    std::cout << "\n";
    return a*a;

}

int main()
{
    // std::thread t1(&magic, value);
    // std::cin >> value;
    // flag = true;
    // cv.notify_one();
    // t1.join();

    std::promise<int> a;
    std::future<int> b=a.get_future();

    int c;
    std::cin >> c;
    
    a.set_value(c);
    std::future<int> result = std::async(&magic, std::ref(b));

    // std::cout << "Square of " << c << " is: " << result.get();
    return 0;
}
