// Warrior.h
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#pragma once
#include <string>
#include "Player.h"

class Warrior : public Player {
 public:
    explicit Warrior(std::string nickname);

    void attack() override;

    void attack(Monster* monster) override;
};
