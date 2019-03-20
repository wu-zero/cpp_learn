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
   vector<int> ivec;
   int i;
   while(cin >> i){
       ivec.push_back(i);
   }

   for (int i = 0; i < ivec.size()-1; ++i){
       cout << ivec[i] + ivec[i+1] << " ";
   }
   cout << endl;

   int i_lo = 0;
   int i_hi = ivec.size()-1;
   while(i_lo < i_hi){
       cout << ivec[i_lo] + ivec[i_hi] << " ";
       ++i_lo;
       --i_hi;
   }

    return 0;
}