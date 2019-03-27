//
// Created by wyw on 2019/3/27.
//

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;



int main()
{
    vector<int> ivec;
    int i;
    while(cin >> i){
        ivec.push_back(i);
    }

    for (auto it = ivec.begin(); it != ivec.end()-1; ++it) {
        cout << *it + *(it+1) << " ";
    }


    auto it_lo = ivec.begin();
    auto it_hi = ivec.end()-1;
    while(it_lo < it_hi){
        cout << *it_lo + *it_hi << " ";
        ++it_lo;
        --it_hi;
    }

    return 0;
}