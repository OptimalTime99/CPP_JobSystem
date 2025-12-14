// Magician.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Magician.h"

Magician::Magician(std::string nickname) : Player(nickname) {
    this->job_name = "마법사";
}

void Magician::attack() {
    std::cout << "마법 공격!\n";
}
