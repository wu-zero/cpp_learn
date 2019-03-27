//
// Created by wyw on 2019/3/26.
//

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;



int main()
{
    vector<string> text;
    text.push_back("aa aa a");
    text.push_back("bb bb ");
    text.push_back("cc cc");
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto &c : *it) {
            if(isalpha(c)) c = toupper(c);
        }
    }
    for (auto it : text){
        cout << it << endl;
    }
    return 0;
}