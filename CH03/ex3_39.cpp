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
    string s1("aaa"), s2("bbb");
    if (s1 == s2){
        cout << "they are same" << endl;
    }
    else if (s1 > s2){
        cout << "s1 is bigger" << endl;
    }
    else{
        cout << "s2 is bigger" << endl;
    }

    const char* cs1 = "aaa";
    const char* cs2 = "bbb";
    auto result = strcmp(cs1, cs2);
    if (result == 0)
        cout << "they are same" << endl;
    else if (result < 0)
        cout << "s1 is bigger" << endl;
    else
        cout << "s2 is bigger" << endl;

    return 0;
}