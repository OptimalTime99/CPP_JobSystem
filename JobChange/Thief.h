// Thief.h
// Copyright (c) 2025 OptimalTime99. All rights reserved.

#pragma once
#include <string>
#include "Player.h"

class Thief : public Player {
 public:
     explicit Thief(std::string nickname);

    void attack() override;
};
