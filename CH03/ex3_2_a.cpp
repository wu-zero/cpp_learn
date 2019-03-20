//
// Created by wyw on 2019/3/18.
//

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
    string s;
    while(getline(cin, s)){  //ctrl+z 退出
        cout << s << endl;
    }
    return 0;
}
