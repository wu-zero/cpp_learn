//
// Created by wyw on 2019/3/27.
//

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; ++i) arr[i] = i;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
//    for (auto num : arr){
//        cout << num << endl;
//    }
}