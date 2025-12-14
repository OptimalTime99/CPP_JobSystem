// Player.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Player.h"

void Player::printPlayerStatus() const {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치" << std::endl;
    std::cout << "닉네임: " << nickname << std::endl;
    std::cout << "직업: " << job_name << std::endl;
    std::cout << "Lv. " << level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "공격력: " << power << std::endl;
    std::cout << "방어력: " << defence << std::endl;
    std::cout << "정확도: " << accuracy << std::endl;
    std::cout << "속도: " << speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

Player::Player(std::string nickname) {
    this->nickname = nickname;
    this->level = 1;
    this->HP = 100;
    this->MP = 50;
    this->power = 10;
    this->defence = 0;
    this->accuracy = 1;
    this->speed = 1;
}

std::string Player::getJobName() {
    return job_name;
}
std::string Player::getNickname() {
    return nickname;
}
int Player::getLevel() {
    return level;
}
int Player::getHP() {
    return HP;
}
int Player::getMP() {
    return MP;
}
int Player::getPower() {
    return power;
}
int Player::getDefence() {
    return defence;
}
int Player::getAccuracy() {
    return accuracy;
}
int Player::getSpeed() {
    return speed;
}

void Player::setNickname(std::string nickname) {
    this->nickname = nickname;
}
void Player::setHP(int HP) {
    this->HP = HP;
}
void Player::setMP(int MP) {
    this->MP = MP;
}
void Player::setPower(int power) {
    this->power = power;
}
void Player::setDefence(int defence) {
    this->defence = defence;
}
void Player::setAccuracy(int accuracy) {
    this->accuracy = accuracy;
}
void Player::setSpeed(int speed) {
    this->speed = speed;
}
