//
// Created by wyw on 19-4-29.
//
#include <iostream>
#include <initializer_list>

int sum(const std::initializer_list<int> &i1){
    int sum = 0;
    for(auto const i : i1){
        sum += i;
    }
    return sum;
}


int main(void)
{
    auto i1 = {1, 3, 5, 7};
    std::cout << sum(i1) << std::endl;
    return 0;
}

