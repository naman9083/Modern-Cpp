#include<iostream>
#include<vector>
/* 
    No.     IdentiferName       Address     Content     Alternate Names
    1           n1              0x99H         99            ref argRef
    2           data            0x187H        10            r1 r2

 */
void magic(int& argref){

}
int main(){
    int n1=99;  
    int &ref=n1;    //creating a reference
    magic(n1);  //pass by reference

    /* 
        a reference DOES NOT exist anywhere in memory
        thats why you can't treat them like value and can't put them in array
    */

   /* 
        A pointer when stored internally in an object
        creates representation of a pointer(Smart Pointer)

        A reference stored in an object internally creates 
        representation of a reference called reference_wrapper
    */

}