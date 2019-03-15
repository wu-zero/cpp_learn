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
    for (Sales_item item;cin >> item; cout<<item <<endl);
    return 0;
}