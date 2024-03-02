#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

std::mutex mt; // mutex is a binary semaphore
void square(const std::vector<int> &numbers)
{
    for (int number : numbers)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        mt.lock();
        std::cout << "Square of " << number << " is:" << number * number << "\n";
        mt.unlock();
    }
}

void cube(const std::vector<int> &numbers)
{
    for (int number : numbers)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
        // ONLY 1 EXECUTING ENTITY SHOULD BE DOING THIS AT A TIME!

        std::cout << "Cube of " << number << " is:" << number * number * number << "\n";
    }
}

int main(int argc, char const *argv[])
{

    //main thread starts, creates an array object
    //in local memory
    std::vector<int> vc = {1, 2, 3, 4, 5};

    // we launch a new thread
    /*
        A thread is a mini-program. As the developer, t1 object is a "handle" for me to interact with the thread in some way. Thia t1 is attached to square mini program We have also passed "data" by reference which is required by the Square function 
     */
    std::thread t1(&square, std::ref(vc));
    /*
        A thread is a mini-program. As the developer, t1 object is a "handle" for me to interact with the thread in some way. Thia t1 is attached to cube mini program We have also passed "data" by reference which is required by the Cube function 
     */
    std::thread t2(&cube, std::ref(vc));
    
    // SIGNAL AS A RESULT/SUMMARY/SATISFACTION
    // JOIN: Wait for a thread

    t1.join();
    t2.join();

    std::cout << "Goodbye\n";

    return 0;
}
