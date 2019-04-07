//
// Created by wyw on 2019/4/7.
//

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
int main()
{
    int count = 1;
    string max_num_string = "";
    int max_num = 1;
    for (string str, prestr; cin >> str; ){
        if (str == prestr) {
            ++count;
        }
        else {
            count = 1;
        }
        prestr = str;
        //判断
        if (count > max_num){
            max_num_string = str;
            max_num = count;
        }
    }

    if (max_num_string == ""){
        cout << "no string" <<endl;
    }
    else{
        cout << max_num_string << " " << max_num << endl;
    }

    return 0;
}