#include <iostream>
#include <functional>
#include <array>
#include <thread>
#include <mutex>

/*
    create an array of 3 objects
        - thread 1 should calculate square of each number in the array and store in a result array (position 1 to 5)
        - thread 2 should calculate cube of each number in the array and store in a result array(position 6 to 10)
        - thread 3 should calculate factorial of each number in the array and store in a result array(position 11 to 15)

        Assumptions : Numbers in the input array will be between 1 to 10

*/

std::mutex mt;
using fn = std::function<void(int &, std::array<int, 15> &, std::array<int, 15> &)>;
using ThreadArray = std::array<std::thread, 3>;
using FnCon = std::array<fn, 3>;
using InputContainer = std::array<int, 15>;

void buildFunction(int &i, InputContainer &result, const InputContainer &in, FnCon &fns)
{
    fns[0] = [&](int &, InputContainer &, const InputContainer &)
    {
        std::lock_guard<std::mutex> lk(mt);
        for (int j = 0; j < 5; j++)
            result[i++] = in[j] * in[j];
    };

    fns[1] = [&](int &, InputContainer &, const InputContainer &)
    {
        std::lock_guard<std::mutex> lk(mt);
        for (int j = 0; j < 5; j++)
            result[i++] = in[j] * in[j] * in[j];
    };
    fns[2] = [&](int &, InputContainer &, const InputContainer &)
    {
        std::lock_guard<std::mutex> lk(mt);
        for (int j = 0; j < 5; j++)
        {
            int pr = 1;
            for (int i = in[j]; i >= 1; i--)
            {
                pr *= i;
            }
            result[i++] = pr;
        }
    };
}
void MapFnsToThreadArray(FnCon &fns, InputContainer &in, InputContainer &result, int &i, ThreadArray &th)
{
    for (int k = 0; k < 3; k++)
    {
        th[k] = std::thread(std::ref(fns[i]), std::ref(i), std::ref(result), std::ref(in));
    }
}
void joinThread(ThreadArray &arr){
    for (std::thread &th : arr)
        if (th.joinable())
            th.join();
}
void print(InputContainer result){
    for (auto i : result)
        std::cout << "Result: "<<i << "\n";
}
int main(int argc, char const *argv[])
{
    int i = 0;

    InputContainer result;
    FnCon fns;
    InputContainer in{1, 2, 3, 4, 5};
    buildFunction(i, result, in, fns);

    ThreadArray arr;

    MapFnsToThreadArray(fns, in, result, i, arr);

    joinThread(arr);
    print(result);

    return 0;
}
