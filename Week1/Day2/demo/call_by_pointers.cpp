#include<iostream>

void magic(int *data){
    std::cout<<"Dereferencing of data in Magic b4 modification is: "<<*data<<"\n";
    std::cout<<"Content of data in Magic b4 modification is: "<<data<<"\n";
    std::cout<<"Address of data in Magic b4 modification is: "<<&data<<"\n";
    *data=111;
    std::cout<<"Content of data in Magic after modification is: "<<data<<"\n";
    std::cout<<"Dereferencing data in Magic after modification is: "<<*data<<"\n";
}
int main()
{

    int data=100;
    std::cout<<"Value in Main b4 modification is: "<<data<<"\n";
    std::cout<<"Address in Main b4 modification is: "<<&data<<"\n";
    magic(&data);
    
    std::cout<<"Value in Main after modification is: "<<data<<"\n";


    int cout=101;
    std::cout<<cout<<std::endl;
    return 0;
}
