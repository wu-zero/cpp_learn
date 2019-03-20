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
    decltype(str.size()) i = 0; //unsigned long long
    while(i != str.size()){
        str[i] = 'X';
        ++i;
    }
    cout << str << endl;

    for(i = 0; i != str.size(); ++i){
        str[i] = 'Y';
    }
    cout << str << endl;

    return 0;



}