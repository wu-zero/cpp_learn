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
    string result, s;
    while (cin >> s){
        result += s;
        result += " ";
    }
    cout << result << endl;
    return 0;
}