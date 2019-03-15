//
// Created by wyw on 2019/3/15.
//

// 重做ex1_11
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x1 = 0, x2 = 0;
    cout << "please input two integers:" << endl;
    cin >> x1 >> x2;
    if (x1 > x2){
        for (int i = x2; i <= x1; ++i)
            cout << i << " ";
    }
    else
    {
        for (int i = x1; i <= x2; ++i)
            cout << i << " ";
    }
}