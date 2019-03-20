//
// Created by wyw on 2019/3/20.
//

#ifndef CPP_LEARN_EX2_42_H
#define CPP_LEARN_EX2_42_H

#include <string>
#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    void CalcRevenue(double price);
    void SetData(Sales_data data);
    void AddData(Sales_data data);
    void Print();
};

void Sales_data::CalcRevenue(double price) {
    revenue = units_sold * price;

}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
    if (bookNo != data.bookNo) return;
    units_sold += data.units_sold;
    revenue += data.revenue;
}

void Sales_data::Print()
{
    std::cout << bookNo << " " << units_sold << " " << revenue << " ";
}



#endif //CPP_LEARN_EX2_42_H
