#include <vector>
#include <string>
#include <map>
#include <iterator>

#include "IceCreamItem.h"

IceCreamItem::IceCreamItem(std::string size){
    this->size = size;

    if(size == "small"){
        price += 3.00;
    }
    if(size == "medium"){
        price += 5.00;
    }
    if(size == "large"){
        price += 6.50;
    }
}