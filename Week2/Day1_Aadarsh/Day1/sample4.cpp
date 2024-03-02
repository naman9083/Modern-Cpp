
#include<iostream>
#include<functional> //support for functional programming
#include<vector>
void Cube(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number*number<<"\n";
}

void Operation(const std::vector<int>&data,std::function<void(int)>fn){
    for(int val:data){
        fn(val);
    }
}
//& and && are two differnt data types

int main(){
    //[]= used for creating lambda closure
    auto fn=[](int number)->void{   //lambda / anonymous func (this is rvalue func) and when i set it with fn it becomes lvalue
            std::cout<<"Square of: "
                <<number<<" is: "<<number*number<<"\n";
    };
    //fn(10);
    //lambda function is nothing but () operator overloaded
    std::vector<int>v1{10,20,30,40,50};
    Operation(
        v1,
        fn
    );
}