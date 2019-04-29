//
// Created by wyw on 19-4-29.
//
#include <iostream>
#include <string>

int main(int argc, char **argv) // argc 参数计数 // argv[0] 程序运行时的全路径名
{
    std::string str;
    for (int i = 1; i != argc; ++i){
        str += std::string(argv[i]) + " ";
    }
    std::cout << str << std::endl;
    return 0;
}

