// Thief.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Thief.h"
#include "Monster.h"
#include "Player.h"

Thief::Thief(std::string nickname) : Player(nickname) {
    this->job_name = "도적";
    this->power += 30;
    this->defence += 15;
    this->speed += 5;
}

void Thief::attack() {
    std::cout << "표창 던지기!\n";
}

void Thief::attack(Monster* monster) {
    const int HITTER = 5;
    std::string playerName = this->getNickname();
    int damage = (this->power - monster->getDefence()) / HITTER;

    if (damage <= 0) damage = 1;

    int currentHP = monster->getHP() - damage * HITTER;
    monster->setHP(currentHP);

    std::string monsterName = monster->getName();
    for (int i = 0; i < HITTER; ++i) {
        std::cout << monsterName << "에게 표창 공격으로 "
                  << damage << "의 피해를 입혔다!\n";
    }

    if (currentHP > 0) {
        std::cout << monsterName << "의 남은 HP: " << currentHP << "\n";
    } else {
        std::cout << playerName << "이(가) "
                  << monsterName << "과(와)의 전투에서 승리했다!\n";
    }
}
