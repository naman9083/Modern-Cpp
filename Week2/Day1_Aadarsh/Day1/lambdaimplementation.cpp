#include<iostream>

class LambdaImplementation
{
private:
    int _number;
public:
    LambdaImplementation()=default;
    ~LambdaImplementation()=default;
    void operator ()(int number){
        std::cout<<"Square of: "<<number<<" is: "
            <<number*number*number<<"\n";
    }
};
int main(){
    LambdaImplementation l1;
    l1(10); //operator() is called
}