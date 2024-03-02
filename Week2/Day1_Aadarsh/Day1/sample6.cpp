#include<iostream>
#include<functional>

void magic(int &ref){

}

int main(){
    int data{10};
    std::reference_wrapper<int>refWrap{data};
    magic(refWrap);
    std::reference_wrapper<int>arr[]{refWrap};
    
}