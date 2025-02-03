//
// Created by Jacob on 1/24/2025.
//

#include "Container.h"
#include "Item.h"

void Chest::addItem(Item &&item) {
    contents.push_back(std::move(item));
}

void Chest::showItems() {
    if (!contents.empty()) {
        for (const Item & item: contents) {
            std::cout << item.getItemName() << '\n';
        }
    } else {
        std::cout << "Chest is empty";
    }
}

void Chest::transferContents(std::vector<Item>&& playerInventory) {
    for (auto &item: contents) {
        playerInventory.push_back(std::move(item));
    }
    contents.clear();
}



