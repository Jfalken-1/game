//
// Created by Jacob on 1/24/2025.
//

#include "Item.h"
#include <iostream>


std::string Item::getItemName() const {
    return itemName;
}

void Item::showStats() const {
    std::cout << "Item: " << itemName << '\n' << ap;
}




