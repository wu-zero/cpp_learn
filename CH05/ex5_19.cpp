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
    string end_flag;
    do{
        cout << "input two string: ";
        string str1, str2;
        cin >> str1 >> str2;
        cout << (str1 <= str2 ? str1 : str2)
        << " is the short one" <<endl;
        cout << "More? Enter yes or no: ";
        cin >> end_flag;
    } while (end_flag[0] == 'y');
}