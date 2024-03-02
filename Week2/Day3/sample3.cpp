#include <iostream>
#include <functional>
/* 
        function pointers
        function wrapper
            - A way to capture any callable in a type-erased way
            - It can be used for following
                - Pass a callable as a parameter 
                - Return a callable as a value
                - Save functions as "values" in container/variables
        Reference wrapper 
            - It is a object that internally stores refernce to "something"
            - it uses pointer to references conversion internally
            - It can be replacement for raw reference everywhere in the code.
            - RValues cannot be converted to reference wrapper.
        std::bind 
            - used to create a partial function 
                - a function where some parameters are already fixed
            
            - redesign or tweak the sequence of parameters by swapping or respositioning them as per requirement
            
            
        

*/

int &magic(){
    int n1 = 10;
    return n1;
}
int main()
{
    int a = 10;
    std::reference_wrapper<int> ref = magic();

    return 0;
}
