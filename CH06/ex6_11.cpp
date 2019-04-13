//
// Created by wyw on 19-4-13.
//

#include <iostream>

void reset(int &i){
    i=0;
}


int main()
{
    int num = 222;
    std::cout << num << std::endl;
    reset(num);
    std::cout << num << std::endl;
    return 0;
}
