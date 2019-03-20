//
// Created by wyw on 2019/3/18.
//

//比较大小

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;


int main()
{
    string str1, str2;
    while(cin >> str1 >> str2){      //ctrl+z 退出
        if (str1 == str2){
            cout << "They are equal" << endl;
        }
        else{
            cout << "The larger one is " << ((str1 > str2) ? str1 : str2) << endl;
        }
    }
    return 0;
}
