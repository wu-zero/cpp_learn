//
// Created by wyw on 19-4-13.
//

#include <iostream>
#include <string>
using std::string;



bool any_captial(const string &str){
    for (auto ch: str){
        if (isupper(ch)) return true;
    }
    return false;
}

void to_lowercase(string &str){
    for (auto &ch : str) ch = tolower(ch);
}

int main()
{
    string str("abcdEFG");
    std::cout << any_captial(str) << std::endl;
    to_lowercase(str);
    std::cout << str << std::endl;

}