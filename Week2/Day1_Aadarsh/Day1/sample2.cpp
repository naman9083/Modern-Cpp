
#include<iostream>
#include<functional> //support for functional programming
void Square(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number<<"\n";
}
void Cube(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number*number<<"\n";
}

void Operation(int *arr,int size,std::function<void(int)>fn){
    for(int i=0;i<size;i++){
        fn(arr[i]);
    }
}


int main(){
    // void (*ptr1)(int)=Square;
    // void (*ptr2)(int)=Cube;
    int arr[5]={10,20,30,40,50};
    Operation(arr,5,Square);
}
