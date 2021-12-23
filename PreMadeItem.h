#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem{
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();
    double getPrice();
    std::string composeItem();
protected:
    std::string name = "";
};

#endif
