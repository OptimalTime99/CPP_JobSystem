// Warrior.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Warrior.h"
#include "Monster.h"
#include "Player.h"


Warrior::Warrior(std::string nickname) : Player(nickname) {
    this->job_name = "전사";
    this->HP += 100;
    this->power += 100;
    this->defence += 50;
}

void Warrior::attack() {
    std::cout << "수직 베기!\n";
}

void Warrior::attack(Monster* monster) {
    std::string playerName = this->getNickname();
    int damage = this->power - monster->getDefence();

    if (damage <= 0) damage = 1;

    int currentHP = monster->getHP() - damage;
    monster->setHP(currentHP);

    std::string monsterName = monster->getName();
    std::cout << monsterName << "에게 수직 베기로 "
              << damage << "의 피해를 입혔다!\n";

    if (currentHP > 0) {
        std::cout << monsterName << "의 남은 HP: " << currentHP << "\n";
    } else {
        std::cout << playerName << "이(가) "
                  << monsterName << "과(와)의 전투에서 승리했다!\n";
    }
}
