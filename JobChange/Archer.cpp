// Archer.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Archer.h"
#include "Monster.h"
#include "Player.h"


Archer::Archer(std::string nickname) : Player(nickname) {
    this->job_name = "궁수";
    this->power += 50;
    this->defence += 10;
    this->speed += 3;
}

void Archer::attack() {
    std::cout << "활 쏘기!\n";
}

void Archer::attack(Monster* monster) {
    const int HITTER = 3;
    std::string playerName = this->getNickname();
    int damage = (this->power - monster->getDefence()) / HITTER;

    if (damage <= 0) damage = 1;

    int currentHP = monster->getHP() - damage * HITTER;
    monster->setHP(currentHP);

    std::string monsterName = monster->getName();

    for (int i = 0; i < HITTER; ++i) {
        std::cout << monsterName << "에게 화살 공격으로 "
                  << damage << "의 피해를 입혔다!\n";
    }

    if (currentHP > 0) {
        std::cout << monsterName << "의 남은 HP: " << currentHP << "\n";
    } else {
        std::cout << playerName << "이(가) "
                  << monsterName << "과(와)의 전투에서 승리했다!\n";
    }
}
