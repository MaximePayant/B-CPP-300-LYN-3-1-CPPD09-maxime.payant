/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Warrior.hpp
*/

#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"

class Warrior :
    virtual public Character
{

    private:
        std::string m_weapon;

    public:
        Warrior(const std::string&name, int level, const std::string& weapon = "hammer");

        int CloseAttack();
        int RangeAttack();
        using Character::Heal;
        using Character::RestorePower;
        using Character::TakeDamage;

};

#endif // WARRIOR_HPP