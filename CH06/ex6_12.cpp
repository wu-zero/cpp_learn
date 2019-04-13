//
// Created by wyw on 19-4-13.
//

#include <iostream>

void swap(int &num1, int &num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}


int main()
{
    int num1 = 222,num2 = 333;
    std::cout << num1 << " " << num2 << std::endl;
    swap(num1, num2);
    std::cout << num1 << " " << num2 << std::endl;
    return 0;
}
