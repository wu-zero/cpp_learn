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
    const int size = 10;
    int arr[size];
    for (auto it = arr; it != arr + size; ++ it){
        *it = 0;
    }

    for (auto i : arr) {
        cout << i << " ";
    }

    return 0;
}