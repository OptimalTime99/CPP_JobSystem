// Thief.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Thief.h"

Thief::Thief(std::string nickname) : Player(nickname) {
    this->job_name = "도적";
}

void Thief::attack() {
    std::cout << "표창 던지기!\n";
}
