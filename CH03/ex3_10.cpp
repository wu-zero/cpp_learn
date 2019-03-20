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
    string str = "aaa,. bb!b";
    string result;
    for (auto x: str){
        if (!ispunct(x)){
            result += x;
        }
    }
    cout << result << endl;
    return 0;
}