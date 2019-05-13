//
// Created by wyw on 2019/3/20.
//
#include <iostream>
#include <string>

//1.5.1

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0; //总数
    double revenue = 0.0; //总价
};

int main()
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = price * book.units_sold;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price;

    return 0;
}