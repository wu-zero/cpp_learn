//
// Created by wyw on 2019/3/27.
//

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

int main()
{
    char cstr3[100];
    char cstr1[] = "Hello ";
    char cstr2[] = "world";
    strcpy(cstr3, cstr1);
    strcat_s(cstr3, cstr2);

    std::cout << cstr3 << std::endl;

    return 0;
}