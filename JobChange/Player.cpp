#include <iostream>
#include "Player.h"

void Player::printPlayerStatus() const{
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