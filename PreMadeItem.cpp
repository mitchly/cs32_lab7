#include <vector>
#include <string>
#include <map>
#include <iterator>

#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name){
    price += 1.00;
}

PreMadeItem::~PreMadeItem(){
}

double PreMadeItem::getPrice(){
    return price;
}

std::string PreMadeItem::composeItem(){
    //trailing zeros need to be added to price

    std::string composed = "Pre-made Size: " + size + "\n";
    composed += "Pre-made Item: " + name + "\n";
    std::stringstream str;
    str << std::fixed << std::setprecision(2) << price;
    composed += "Price: $" + str.str() + "\n";
    return composed;
}