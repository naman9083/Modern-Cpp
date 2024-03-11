#include <iostream>
#include <vector>
#include <optional>

/*
    Developer part : what is the API? What is the design? What is the corner case:
        Scenario 1: My Input has atleast 1 value
                    Some of the values in the input are odd
        Scenario 2: My input has atleast 1 value . None of the values in the input are odd.
        Scenario 3: Input is empty:
                    Nothing Will work! [ Not my concern. Input Invalid Exception]

*/
// if initializer syntax
void FindOddNumbers( std::vector<int>&ans,const std::vector<int>&result){
    for(const int &val:result){
        if(val%2){
            ans.push_back(val);
        }
    }
    if(ans.size()==0)
        throw std::runtime_error("Empty Error\n");
    
}

std::optional<std::vector<int>> FindOddNumbers( const std::vector<int>&ans){
    if(ans.size()==0)
        throw std::runtime_error("Empty Container\n");
    
    std::vector<int> res;
    for (const int &val : ans)
    {
        if(val%2){
            res.push_back(val);
        }
    }
    if(result.empty())
        return std::nullopt;

    return res;
}

int main(int argc, char const *argv[])
{
    // if - initializer syntax
    
    std::vector<int> in{10, 20, 30, 40, 50, 60, 90};
    // if (std::vector<int> result = FindOddNumbers(in);!result.empty()){
    //     for(int i:result){
    //         std::cout << i << "\n";
    //     }
    // }
    std::optional<std::vector<int>> result;
    try
    {
        result = FindOddNumbers(in);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    if (result.has_value()){
        std::cout << result.value()[0];
    }

    return 0;
}



/*
    std::optional : Indicates an alegebruc data type that may 
                    - either contain a value 
                    - or a symbol indicating "ABSENCE OF INFORMATION"

*/
/*
    FindOdd numbers is a function that optionally return a std::vector<int> OR
    Find Odd Numbers: may or may not return a result
*/