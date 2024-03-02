#include <iostream>
#include <vector>


void referMagic(std::vector<int> &data)
{
}

void Magic(std::vector<int> data)
{
}


int main()
{
    Magic(std::vector<int>{10, 20, 30, 40, 50});

    std::vector<int> data{1, 2, 3, 4, 5};

    Magic(data);

    referMagic(data);
    // referMagic( std::vector<int> {1,2,3,4,5});//gives error because we have some variable to pass reference

    return 0;
}
/*
    std::vector<int> data=std::vector<int> {1,2,3,4,5}

 */