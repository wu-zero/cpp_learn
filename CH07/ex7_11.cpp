//
// Created by wyw on 19-5-13.
//

#include "ex7_11.h"

int main()
{
    Sales_data item1;
    print(std::cout, item1) << std::endl;

    Sales_data item2("book1");
    print(std::cout, item2) << std::endl;

    Sales_data item3("book2", 3, 20.00);
    print(std::cout, item3) << std::endl;

    Sales_data item4(std::cin);
    print(std::cout, item4) << std::endl;

    return 0;
}