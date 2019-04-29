//
// Created by wyw on 19-4-29.
//
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string make_plural(size_t ctr, const string &word, const string &ending="s"){
    return (ctr > 1) ? word + ending : word;
}



int main(void)
{
    cout << make_plural(1, "aaa-", "es") << " "
         << make_plural(1, "bb-") << endl;
    cout << make_plural(2, "aaa-", "es") << " "
         << make_plural(2, "bb-") << endl;
    return 0;
}

