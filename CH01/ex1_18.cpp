//
// Created by wyw on 2019/3/15.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int currVal = 0, val = 0;
    if (cin >> currVal){  //Ctrl+D 结束输入
        int cnt = 1;
        while (cin >> val){
            if (val == currVal){
                ++cnt;
            }
            else{
                cout << currVal << " occurs " << cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times" << endl;
    }
    return 0;
}