//
// Created by wyw on 19-4-29.
//
#include <iostream>
#include <vector>


using Iter = std::vector<int>::const_iterator;
void print(Iter first, Iter last){
    if(first == last){
        return;
    }
    std::cout << *first << " ";
    print(++first, last);
}


int main(void)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    print(vec.cbegin(), vec.cend());
    return 0;
}

