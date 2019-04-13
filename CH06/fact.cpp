//
// Created by wyw on 19-4-13.
//
#include <iostream>
#include "Chapter6.h"

int fact(int i){
    return i > 1? i * fact(i-1) : 1;
}

void cin_fact(){
    for(int i; std::cout << "enter a number: ", std::cin>>i;){
        if (i < 1 || i > 12){
            std::cout << "try again: " << std::endl;
            continue;
        }
        std::cout << fact(i) << std::endl;
    }
}
