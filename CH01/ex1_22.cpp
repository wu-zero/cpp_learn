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
    Sales_item sumItem;

    if (std::cin >> sumItem){
        Sales_item currItem;
        while(cin >> currItem){
            if (sumItem.isbn() == currItem.isbn()){
                sumItem += currItem;
            }
            else{
                cout << sumItem << endl;
                sumItem = currItem;
            }
        }
        cout << sumItem << endl;
    }

    return 0;
}