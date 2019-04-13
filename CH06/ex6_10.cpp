//
// Created by wyw on 19-4-13.
//

#include <iostream>

void swap(int *ip1, int *ip2){
    int tmp = *ip1;
    *ip1 = *ip2;
    *ip2 = tmp;
}


int main()
{
    int num1 = 222,num2 = 333;
    std::cout << num1 << " " << num2 << std::endl;
    swap(&num1, &num2);
    std::cout << num1 << " " << num2 << std::endl;
    return 0;
}
