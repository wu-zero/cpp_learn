//
// Created by wyw on 2019/4/7.
//

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string str, prestr;
    bool twice_flag = false;
    while(cin >> str){
        if (str == prestr){
            twice_flag = true;
            break;
        }
        else{
            prestr = str;
        }
    }
    if (twice_flag){
        cout << str << " occurs twice" << endl;
    }
    else {
        cout << "no twice" << endl;
    }

    return 0;

}