// Sales_item.cpp
// Created by xiaojl Jan/08/2021
// 读写Sales_item

#include "Sales_item.h"

std::istream&
operator >>(std::istream& in, Sales_item& item)
{
	double price;
	in >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return in;
}

std::ostream&
operator <<(std::ostream& out, Sales_item& item)
{
	out << item.ISBN()     << " " 
		<< item.units_sold << " "
		<< item.revenue    << " "
		<< item.AvgPrice();

	return out;
}

std::string
Sales_item::ISBN() const
{
	return bookNo;
}

double 
Sales_item::AvgPrice() const
{
	return units_sold ? revenue / units_sold : 0;
}
