//
// Created by wyw on 2019/3/15.
//

#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Sales_item currItem, valItem;
    if (cin >> currItem)
    {
        int cnt = 1;
        while (cin >> valItem)
        {
            if (valItem.isbn() == currItem.isbn())
            {
                ++cnt;
            }
            else
            {
                cout << currItem << " occurs " << cnt << " times " << endl;
                currItem = valItem;
                cnt = 1;
            }
        }
        cout << currItem << " occurs " << cnt << " times " << endl;
    }
    return 0;
}