#ifndef ICECREAMORDER_H
#define ICECREAMORDER_H

#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>

#include "IceCreamItem.h"

class IceCreamOrder {
public:
	std::string printBill() const;
	void addItem(IceCreamItem* item);
private:
	std::vector<IceCreamItem*> items;
};

#endif

