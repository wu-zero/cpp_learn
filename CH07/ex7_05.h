//
// Created by wyw on 19-5-13.
//

#ifndef CPP_LEARN_EX7_05_H
#define CPP_LEARN_EX7_05_H

#include <string>

struct Person
{
    std::string name;
    std::string address;
public:
//    std::string const& get_name() const { return name ; }
//    std::string const& get_addr() const { return address; }
    auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }
};

#endif //CPP_LEARN_EX7_05_H
