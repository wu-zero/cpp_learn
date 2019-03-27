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
    int arr[] = {0, 1, 2, 3, 4};
    vector<int> ivec(std::begin(arr), std::end(arr));

    for (auto i : ivec){
        cout << i << " ";
    }

    return 0;
}