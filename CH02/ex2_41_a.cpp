//
// Created by wyw on 2019/3/20.
//
#include <iostream>
#include <string>

//1.5.1

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

int main()
{
    Sales_data book;
    std::cin >> book.bookNo >> book.units_sold >> book.price;
    book.revenue = book.price * book.units_sold;
    std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << book.price;

    return 0;
}