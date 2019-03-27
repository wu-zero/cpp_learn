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
    int arr[10];
    int arr2[10];

    for (int i = 0; i < 10; ++i) arr[i] = i;

    for (int i = 0; i < 10; ++i) arr2[i] = arr[i];
    for (int i = 0; i < 10; ++i) {
        cout << arr2[i] << endl;
    }
    //==================
    vector<int> ivec(10);
    vector<int> ivec2(10);

    for (int i = 0; i != 10; ++i) ivec[i] = i;

    ivec2.assign(ivec.begin(),ivec.end());
    for (auto i : ivec2){
        cout << i << endl;
    }


}