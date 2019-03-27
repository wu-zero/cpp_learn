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
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100){
            ++ *(scores.begin() + grade/10);
        }
    }
    for (auto s : scores){
        cout << s << " ";
    }


    return 0;
}