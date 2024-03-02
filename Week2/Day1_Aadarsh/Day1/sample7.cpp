#include<iostream>

/* A pointer is address of something */

/* 
    use case 1: Make an array
    [   10 |   20  |   30   ]
    0x11H   0x15H   0x19H
*/
struct sample7
{
    int a;
    void m(){}
};

void magic(int *ptr){}
void f1(){
    int arr[]={10,20,40};
    int *ptr=arr;   //attack array first location to ptr
    magic(arr);
}