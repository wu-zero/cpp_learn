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
   string s;
   while(cin >> s){
       v.push_back(s);
   }
   for (auto &str : v){
       for (auto &c : str){
           c = toupper(c);
       }
   }

   for (auto str : v){
       cout << str << endl;
   }
    return 0;
}