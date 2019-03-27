//
// Created by wyw on 2019/3/27.
//

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;



int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto &it : ivec){
        it = it * 2;
    }

    for (auto it : ivec){
        cout << it << endl;
    }
    return 0;
}