// Sales_item.h
// Created by xiaojl Jan/08/2021
// Sales_item的加法

#ifndef __SALESITEMX_H__
#define __SALESITEMX_H__

#include <iostream>

class Sales_item
{
	friend std::istream& operator >>(std::istream&, Sales_item&);
	friend std::ostream& operator <<(std::ostream&, Sales_item&);

public:
	Sales_item& operator +=(const Sales_item&);
	std::string ISBN() const;
	double AvgPrice() const;

private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

#endif
