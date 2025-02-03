//
// Created by Jacob on 1/24/2025.
//

#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <utility>


class Item {
private:
    std::string itemName;
    int ap;

public:
    Item(std::string name, int attackPower) : itemName(std::move(name)), ap(attackPower){}
    std::string getItemName() const;
    void showStats() const;
    Item generateKnife() const;
};



#endif //ITEM_H
