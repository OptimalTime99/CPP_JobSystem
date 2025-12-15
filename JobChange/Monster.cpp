// Monster.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <string>
#include <iostream>
#include "Monster.h"

Monster::Monster(std::string name) {
    this->name = name;
    this->HP = 10;
    this->power = 30;
    this->defence = 10;
    this->speed = 10;
}


void Monster::attack(Player* player) {
    int damage = this->power - player->getDefence();
    if (damage <= 0) damage = 1;
    int currentHP = player->getHP() - damage;
    player->setHP(currentHP);

    std::cout << "플레이어에게 " << damage << " 데미지를 주었다!\n";

    if (currentHP > 0) {
        std::cout << "플레이어의 남은 HP: " << currentHP << "\n";
    }
}

std::string Monster::getName() {
    return name;
}
int Monster::getHP() {
    return HP;
}
int Monster::getPower() {
    return power;
}
int Monster::getDefence() {
    return defence;
}
int Monster::getSpeed() {
    return speed;
}

void Monster::setName(std::string name) {
    this->name = name;
}
void Monster::setHP(int HP) {
    if (HP < 0) HP = 0;
    this->HP = HP;
}
void Monster::setPower(int power) {
    if (power < 0) power = 0;
    this->power = power;
}
void Monster::setDefence(int defence) {
    this->defence = defence;
}
void Monster::setSpeed(int speed) {
    this->speed = speed;
}
