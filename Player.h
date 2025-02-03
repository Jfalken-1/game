//
// Created by Jacob on 1/24/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <utility>
#include <vector>


class Player {
private:
    std::string name;
    int hp = 0;
    int def = 0;
    int gold = 0;
    std::vector<std::string> inventory;
public:
    Player();
    Player(std::string name,const int hp, const int mp, const int gold) : name(std::move(name)), def(def), gold(gold){}
    std::vector<std::string>& getInventory();
    std::string getName();
    int getHp() const;
    int getDef() const;
    int getGold() const;
    void setName(std::string newName);
    void setHp(int newHp);
    void setDef(int newDef);
    void setGold(int newGold);
};



#endif //PLAYER_H
