//
// Created by wyw on 19-5-25.
//

#ifndef CPP_LEARN_EXE7_22_H
#define CPP_LEARN_EXE7_22_H

#include <string>
#include <iostream>

struct Person
{
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);
public:
    Person() = default;
    Person(const std::string &sname, const std::string &saddr):
            name(sname), address(saddr){};
    Person(std::istream &is){read(is, *this);};
    std::string const& get_name() const { return name ; }
    std::string const& get_addr() const { return address; }
private:
    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &person){
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person){
    return os << person.name << " "<< person.address;
}

#endif //CPP_LEARN_EXE7_22_H
