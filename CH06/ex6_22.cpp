//
// Created by wyw on 19-4-13.
//

#include <iostream>
using std::cout;
using std::endl;


void print(int i){
    cout << i << endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end)
        cout << *beg++ << endl;
}


int main()
{
    int i = 0, j[2] = { 0, 1 };

    print(i);
    print(std::begin(j), std::end(j));
    return 0;

}