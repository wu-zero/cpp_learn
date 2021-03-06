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

template <typename T>
void show_size_and_values(vector<T> obj){
    cout << "size:" << obj.size() << endl;
    cout << "value:" << endl;
    for (auto i : obj){
        cout << i << ",";
    }
    cout << endl;
}


int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };
    show_size_and_values(v1);
    show_size_and_values(v2);
    show_size_and_values(v3);
    show_size_and_values(v4);
    show_size_and_values(v5);
    show_size_and_values(v6);
    show_size_and_values(v7);

    return 0;
}