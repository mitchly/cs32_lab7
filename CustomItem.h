#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>

#include "IceCreamItem.h"

class CustomItem : public IceCreamItem{
public:
    CustomItem(std::string size);
    virtual ~CustomItem();
    double getPrice();
    void addTopping(std::string topping);
    std::string composeItem();
protected:
    //map
    std::map<std::string, int> custom; 
};

#endif