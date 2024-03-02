#include<iostream>



void magic(int val){
    std::cout<<"Value in Magic b4 modification is: "<<val<<"\n";
    std::cout<<"Address in Magic b4 modification is: "<<&val<<"\n";
    val=111;
    std::cout<<"Value in Magic after modification is: "<<val<<"\n";
}
int main()
{

    int val=100;
    std::cout<<"Value in Main b4 modification is: "<<val<<"\n";
    std::cout<<"Address in Main b4 modification is: "<<&val<<"\n";
    magic(val);
    
    std::cout<<"Value in Main after modification is: "<<val<<"\n";

    return 0;
}