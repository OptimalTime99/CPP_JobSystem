// Warrior.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Warrior.h"

Warrior::Warrior(std::string nickname) : Player(nickname) {
    this->job_name = "전사";
}

void Warrior::attack() {
    std::cout << "수직 베기!\n";
}
