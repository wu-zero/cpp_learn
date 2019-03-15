//
// Created by wyw on 2019/3/15.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int sum = 0, number = 0;
    cout << "input numbers:" << endl; //Ctrl+D 结束输入
    while(cin >> number)
    {
        sum += number;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}