//
// Created by wyw on 2019/3/18.
//

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;
    p1 = &b; //修改p1的值
    *p2 = 5; //修改p2所指对象的值
    cout << a << " " << b << endl;
    cout << *p1 << " " << *p2 << endl;
}