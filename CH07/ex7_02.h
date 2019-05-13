//
// Created by wyw on 19-5-13.
//

#ifndef CPP_LEARN_EX7_02_H
#define CPP_LEARN_EX7_02_H

#include <string>

struct Sales_data
{
    std::string isbn() const { return bookNo;};
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif //CPP_LEARN_EX7_02_H
