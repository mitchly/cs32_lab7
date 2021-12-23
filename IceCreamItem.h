#ifndef ICECREAMITEM_H
#define ICECREAMITEM_H

#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>

class IceCreamItem {
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".
	IceCreamItem(std::string size);

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	virtual std::string composeItem() = 0;

	// Returns the dollar amount of an ice cream item.
	virtual double getPrice() = 0;
protected:
	double price;
	std::string size;
};

#endif
