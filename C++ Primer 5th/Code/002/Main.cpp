// Main.cpp
// Created by xiaojl Jan/08/2021
// 主函数

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    std::cin >> item1; // 0-201-78345-x 3 20.00

    Sales_item item2;
    std::cin >> item2; // 0-201-78345-x 2 25.00

    std::cout << (item1 += item2) << std::endl;
    return 0;
}
