#include<iostream>
#include <vector>

/* 
    numbers passed to magic must always be temporary or moved values

    capture parameter by r-valuees
 */
void Magic(std::vector<int>&& v){


}

int main()
{

    std::vector<int>value {10,20,30,40,50};

    Magic(std::move(value));

    std::cout<<value.size();
    return 0;
}
/* 
    We create vector in main(scope in main)
    HEAP
    [10,20,30,40,50,_,_,_,_,_,              ]
    ^              ^            ^          ^
    |              |            |          |    
    |              |            |          |
    [0x100 | 0x116]|      0x132            ]
    <---------------Main variable---------->
    <---------------24 Bytes--------------->
 */

/* 
    1) Program starts because OS schedules the process
    2) Main function is executed as a thread by the OS.
    3) Vector of integers values is created in the scope of main
        3a) Heap Allocations happens and vector gets space on heap
        3b) Pointers to start, end and capcity are recorded in the object "value" in main
    4) Magic(std::move(value))
        4a) std::move(value): It converts lvalue into the rvalue(tells the compiler "value" vector can be prepared for move)
        4b) Now Vector value is treated as an rvalue, so Magic(std::move(value)) becomes 
        Magic(std::vector<int>{10,20,30,40,50})


 */