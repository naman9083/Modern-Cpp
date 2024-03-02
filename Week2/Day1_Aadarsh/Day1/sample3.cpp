
#include<iostream>
#include<functional> //support for functional programming
#include<vector>
void Square(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number<<"\n";
}
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

    std::vector<int>v1{10,20,30,40,50};
    Operation(v1,Square);
}