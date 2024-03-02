/* 
 System which accepts data values and logic. this logic will be
 applied on every single data value received and corresponding
 output will be shown
 
 fn(data,logic)
 */
#include<iostream>
void Square(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number<<"\n";
}
void Cube(int number){
    std::cout<<"Square of: "<<number<<" is: "<<number*number*number<<"\n";
}
//Here Operation func is higher order func 
//higher order func either accepts or returns (or both) another function

void Operation(int *arr,int size,void (*ptr)(int)){
    for(int i=0;i<size;i++){
        (*ptr)(arr[i]);
    }
}


int main(){
    // void (*ptr1)(int)=Square;
    // void (*ptr2)(int)=Cube;
    int arr[5]={10,20,30,40,50};
    Operation(arr,5,Square);
}

/* 
    Higher order functions!
    Anonymous functions
    functional programming paradigm
    no state
    immutable data
    currying
    First-class functions
 */