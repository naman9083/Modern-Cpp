#include <iostream>
#include <vector>

void FindOddNumbers( std::vector<int>&ans,const std::vector<int>&result){
    for(const int &val:result){
        if(val%2){
            ans.push_back(val);
        }
    }
    if(ans.size()==0)
        throw std::runtime_error("Empty Error\n");
    
}

std::vector<int> FindOddNumbers( const std::vector<int>&ans){
    if(ans.size()==0)
        throw std::runtime_error("Empty Container\n");
    
    std::vector<int> res;
    for (const int &val : ans)
    {
        if(val%2){
            res.push_back(val);
        }
    }
    if(res.size()==0)
        throw std::runtime_error("No odd number found\n");
    
}

int main(int argc, char const *argv[])
{
    // if - initializer syntax
    
    std::vector<int> in{10, 20, 30, 40, 41, 51, 97};
    if (std::vector<int> result = FindOddNumbers(in);!result.empty()){
        for(int i:result){
            std::cout << i << "\n";
        }
    }

        return 0;
}
