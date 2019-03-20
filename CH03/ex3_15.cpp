//
// Created by wyw on 2019/3/20.
//


#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> v;
    string i;
    while(cin >> i){
        v.push_back(i);
    }

    for (auto i : v){
        cout << i << " ";
    }

    return 0;
}