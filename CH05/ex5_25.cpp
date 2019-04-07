//
// Created by wyw on 2019/4/7.
//

#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::cin;
using std::runtime_error;

int main()
{
    int i, j;
    cout << "please input tow numbers: " << endl;
    while (cin >> i>>j){
        try{
            if (j == 0)
                throw runtime_error("divisor is 0");
            cout << i / j << endl;
        }
        catch (runtime_error err){
            cout << err.what() << endl;
            cout << "try again? y or n" <<endl;
            char flag;
            cin >> flag;
            if (flag != 'y')
                break;
        }
        cout << "please input tow numbers: " << endl;
    }
    return 0;


}