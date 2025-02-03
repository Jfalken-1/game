//
// Created by Jacob on 1/24/2025.
//

#ifndef CONTAINER_H
#define CONTAINER_H
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"


class Container {

};

class Chest {
private:
    std::vector<Item> contents;

public:

    void addItem(Item &&item);
    void showItems();
    void transferContents(std::vector<Item> &&playerInventory);
};



#endif //CONTAINER_H
