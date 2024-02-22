// #include <bits/stdc++.h>
// using namespace std;

// class Dummy
// {
// private:
//     int _id;
//     float salary;

// public:
//     Dummy(int id, float salary_) : _id(id), salary(salary_) {}
//     ~Dummy() = default;

//     int id() const { return _id; }
//     void setId(int id) { _id = id; }

//     float getSalary() const { return salary; }
//     void setSalary(float salary_) { salary = salary_; }
// };

// int main()
// {

//     // scenario 1: const with non-pointer to primitive data types variable
//     const int n1 = 10; // n1 is constant int
//     int const n2 = 20; // n2 is constant int

//     // scenario 2: const with pointer with primitive data types variable

//     // 2a
//     int n3 = 10;
//     int n4 = 188;
//     const int *ptr = &n3; // ptr is a pointer to a const int   //data constant
//     // *ptr = 77; because data or integer is constant
//     ptr = &n4;

//     // 2b
//     int *const ptr2 = &n3; // ptr2 is a const pointer to an integer //address constant
//     // ptr2=&n4;
//     *ptr2 = 20;

//     // 2c
//     const int *const ptr3 = &n3; // ptr3 is a const pointer to a const integer
//     // *ptr3=1234;
//     // ptr=&n4;

//     // SCENARIO 3:

//     const Dummy d1(101, 67000.0f);
//     // d1.setSalary(19238.0f);

//     cout << d1.getSalary();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {

        unordered_map<int, int> mp;
        for (auto i : arr)
            mp[i]++;

        vector<int> vc;
        for (auto i : mp)
            vc.push_back(i.second);

        sort(vc.begin(), vc.end());
        int i=0;
       
        


    }
};
int main()
{
    return 0;
}