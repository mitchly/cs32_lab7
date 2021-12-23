#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>

#include "CustomItem.h"

CustomItem::CustomItem(std::string size) : IceCreamItem(size){
}

CustomItem::~CustomItem(){
}

double CustomItem::getPrice(){
    return price;
}

void CustomItem::addTopping(std::string topping){
    price += 0.40;
    std::pair<std::map<std::string, int>::iterator, bool> add;
    add = custom.insert(std::pair<std::string, int>(topping, 1));
    if(add.second == false){
        add.first->second++;
    }
}

std::string CustomItem::composeItem(){
    std::string composed = "Custom Size: " + size + "\n" + "Toppings:" + "\n";
    
    std::map<std::string, int>::iterator it;
    for(it = custom.begin(); it != custom.end(); ++it){
        if(custom.size() == 0){
            break;
        }
        composed += it->first + ": " + std::to_string(it->second) + " oz\n";
    }
    std::stringstream str;
    str << std::fixed << std::setprecision(2) << price;
    composed += "Price: $" + str.str() + "\n"; //fix for trailing zeros
    return composed;
}