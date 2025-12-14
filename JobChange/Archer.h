// Archer.h
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#pragma once
#include <string>
#include "Player.h"

class Archer : public Player {
 public:
    explicit Archer(std::string nickname);

    void attack() override;
};
