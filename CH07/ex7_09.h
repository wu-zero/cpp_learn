//
// Created by wyw on 19-5-13.
//

#ifndef CPP_LEARN_EX7_09_H
#define CPP_LEARN_EX7_09_H

#include <string>
#include <iostream>

struct Person
{
    std::string name;
    std::string address;

    std::string const& get_name() const { return name ; }
    std::string const& get_addr() const { return address; }
};

std::istream &read(std::istream &is, Person &person){
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person){
    return os << person.name << " "<< person.address;
}

#endif //CPP_LEARN_EX7_09_H
