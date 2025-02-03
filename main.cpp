#include <iostream>
#include <memory>
#include <random>
#include <vector>
#include "Container.h"
#include "Item.h"
#include "Player.h"

int genRanNum(int min, int max);

int main() {
    Player player1;




    // while (true) {
    //     std::cout << "Choose your class" << '\n' << "1: Fighter" << '\n';
    //     int choice;
    //     std::cin >> choice;
    //
    //         switch (choice) {
    //             case 1:
    //                 player1.setHp(100);
    //                 player1.setDef(25);
    //                 break;
    //         }
    //     break;
    //     }
    Item knife ("Knife", genRanNum(1, 10));
    knife.showStats();

    return 0;
    }

int genRanNum(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    return distrib(gen);
}




