//
// Created by wyw on 19-4-4.
//

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    for (unsigned grade; cin >> grade;) {
        auto result = grade > 90 ? "high pass" : grade < 60 ? "fail" : grade < 75? "low pass" : "pass";
        cout << result << endl;
        if (grade > 90)         cout << "high pass";
        else if (grade < 60)    cout << "fail";
        else if (grade < 75)    cout << "low pass";
        else                cout << "pass";
        cout << endl;
    }
    return 0;
}
