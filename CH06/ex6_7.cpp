//
// Created by wyw on 19-4-13.
//

#include <iostream>
int fun1(){
    static int i=0;
    return i++;

}


int main()
{
    std::cout << fun1() << std::endl;
    std::cout << fun1() << std::endl;
    std::cout << fun1() << std::endl;
    return 0;
}
