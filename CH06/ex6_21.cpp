//
// Created by wyw on 19-4-13.
//

#include <iostream>


int get_largeer_one(int i, const int *p){
    return (i > *p) ? i : *p;
}

int main()
{
    int i = 7;
    std::cout << get_largeer_one(6, &i);
    return 0;

}