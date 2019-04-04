//
// Created by wyw on 2019/3/31.
//
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
int main(){
    vector<int> ivec{0, 1, 2, 3, 4};
    for (auto &i: ivec){
        if (i%2 == 1) {
            i = i * 2;
        }
    }

    for (auto i: ivec){
        cout << i << endl;
    }
    return 0;

}
