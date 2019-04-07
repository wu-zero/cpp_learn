//
// Created by wyw on 2019/4/7.
//

#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;
using std::runtime_error;

int main()
{
    int i, j;
    cin >> i >> j;
    if (j ==0){
        throw runtime_error("divisor is 0");
    }
    cout << i/j <<endl;
    return 0;

}