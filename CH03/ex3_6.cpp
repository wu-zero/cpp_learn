//
// Created by wyw on 2019/3/20.
//


#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str = "aaa bbb";
    for (auto &x : str){
        x = 'X';
    }
    cout << str << endl;
    return 0;
}