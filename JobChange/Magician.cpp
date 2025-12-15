// Magician.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Magician.h"
#include "Monster.h"
#include "Player.h"


Magician::Magician(std::string nickname) : Player(nickname) {
    this->job_name = "마법사";
    this->MP += 50;
    this->power += 150;
    this->accuracy += 2;
}

void Magician::attack() {
    std::cout << "마법 공격!\n";
}

void Magician::attack(Monster* monster) {
    std::string playerName = this->getNickname();
    int damage = this->power - monster->getDefence();

    if (damage <= 0) damage = 1;

    int currentHP = monster->getHP() - damage;
    monster->setHP(currentHP);

    std::string monsterName = monster->getName();
    std::cout << monsterName << "에게 마법 공격으로 "
                             << damage << "의 피해를 입혔다!\n";

    if (currentHP > 0) {
        std::cout << monsterName << "의 남은 HP: " << currentHP << "\n";
    } else {
        std::cout << playerName << "이(가) "
                  << monsterName << "과(와)의 전투에서 승리했다!\n";
    }
}
