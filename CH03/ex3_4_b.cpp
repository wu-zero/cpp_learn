//
// Created by wyw on 2019/3/18.
//

//比较长短

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
        if (str1.size() == str2.size()){
            cout << "They are equal" << endl;
        }
        else{
            cout << "The larger one is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
        }
    }
    return 0;
}
