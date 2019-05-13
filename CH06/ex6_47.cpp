//
// Created by wyw on 19-4-30.
//
#include <iostream>
#include <vector>

//using Iter = std::vector<int>::const_iterator;
typedef std::vector<int>::const_iterator Iter;

//#define NDEBUG

void print(Iter first, Iter last){
#ifndef NDEBUG
    std::cout << "vector size:" << last-first << std::endl;
#endif

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

