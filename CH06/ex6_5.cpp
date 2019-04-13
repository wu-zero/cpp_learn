//
// Created by wyw on 19-4-13.
//

#include <iostream>
int abs(int i){
    return i > 0 ? i : -i;
}


int main()
{
    std::cout << abs(-33) << std::endl;
    return 0;
}
