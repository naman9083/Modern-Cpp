// // #include<bits/stdc++.h>

// // enum class Rank
// // {
// //     FIRST,
// //     SECOND,
// //     THIRD
// // };
// // enum class Gear
// // {

// //     FIRST,
// //     SECOND,
// //     THIRD
// // };
// // enum class Position
// // {

// //     FIRST,
// //     SECOND,
// //     THIRD
// // };
// // int main(int argc, char const *argv[])
// // {
// //     //we cannnot force the user to use enum name as a prefix
// //     enum Rank r1 = Rank::FIRST;
// //     enum Gear g1 = Gear::FIRST;
    
    
        
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <optional>

// using namespace std;

// optional<vector<int>> ans(){
//     vector<int> res{10,20,30,40,50};
//     if(res.empty())
//         return std::nullopt;
//     return res;
// }
// int main()
// {
//     if (optional<vector<int>> a = ans(); a.has_value())

//     {
//         vector<int> v = a.value();

//         cout << "hello\n";
//         cout << v.empty() << "\n";
//     for(int z:a.value()){
//         cout << z << "\n";
//     }
//     }
//     if(!ans().has_value())
//         std::cout << "No values\n";
//    return 0;
// }