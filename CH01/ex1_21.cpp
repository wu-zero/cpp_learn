//
// Created by wyw on 2019/3/15.
//

#include <iostream>
#include "../data/Sales_item.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
int main()
{
    Sales_item item1, item2;
    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()){
        cout << item1 + item2 << endl;
    }
    else{
        cerr << "Different ISBN." << endl;
    }

    return 0;
}