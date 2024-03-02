#include<iostream>
#include <list>
#define endl "\n"

void Magic(std::list<int>&data) {
    
}


void weirdMagic(std::list<int>&& data) {
    std::cout<<data.size()<<endl;

    while(!data.empty()){

        std::cout<<data.front()<<endl;
        data.pop_front();
    }
}

int main()
{


    std::list<int> l1{1,2,3,4,5};

    Magic(l1);//call by lvalue reference

    weirdMagic(std::list<int> {1,2,3,4,5});//move semantics this rvalue is being assigned to lvalue data in weird magic




    weirdMagic(std::move(l1));
    // weirdMagic(l1); //lvalue------->rvalue reference




    /*  
        1) WeirdMagic can only be called by an rvalue
        - It means the user will never be able to copies of data
        One in caller(Main) function 
        and one in callee(weirdMagic) 
        
    
    */

    return 0;
}