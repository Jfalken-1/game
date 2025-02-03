//
// Created by Jacob on 1/24/2025.
//

#include "Player.h"

#include <utility>

Player::Player() = default;

std::vector<std::string>& Player::getInventory() {
    return inventory;
}
std::string Player::getName() {
    return name;
}
int Player::getHp() const {
    return hp;
}
int Player::getDef() const {
    return def;
}
int Player::getGold() const {
    return gold;
}

void Player::setName(std::string newName) {
    name = std::move(newName);
}
void Player::setHp(const int newHp) {
    hp = newHp;
}
void Player::setDef(const int newDef) {
    def = newDef;
}
void Player::setGold(const int newGold) {
    gold = newGold;
}






