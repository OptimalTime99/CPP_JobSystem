// Archer.cpp
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#include <iostream>
#include <string>
#include "Archer.h"

Archer::Archer(std::string nickname) : Player(nickname) {
    this->job_name = "±Ã¼ö";
}

void Archer::attack() {
    std::cout << "È° ½î±â!\n";
}
