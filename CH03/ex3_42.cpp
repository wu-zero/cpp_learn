//
// Created by wyw on 2019/3/27.
//

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4};
    int arr[5];
    for (int i = 0; i != ivec.size(); ++i){
        arr[i] = ivec[i];
    }

    for (auto i : arr) {
        cout << i << " ";
    }

    return 0;
}