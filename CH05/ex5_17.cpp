//
// Created by wyw on 2019/4/7.
//

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool is_prefix(const vector<int>& ivec1, const vector<int>& ivec2){
    if (ivec1.size() > ivec2.size()){
        return is_prefix(ivec2, ivec1);
    }
    for (int i = 0; i < ivec1.size(); ++i){
        if (ivec1[i] != ivec2[i]){
            return false;
        }
    }
    return true;



}




int main()
{
    vector<int> ivec1 = {1,2,3,5};
    vector<int> ivec2 = {1,2,3};

    cout << (is_prefix(ivec1,ivec2) ? "yes" : "no" )<< endl;
    return 0;
}