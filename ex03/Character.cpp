/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:40:36 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 18:57:06 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const name)
{
    this->name = name;
    floorIndex = 0;
    int i = 0;
    while (i < 4) {
        inventory[i] = NULL;
        i++;
    }
    i = 0;
    while (i < 100) {
        floor[i] = NULL;
        i++;
    }
}

Character::Character(const Character& otherCharacter)
{
    *this = otherCharacter;
}

Character& Character::operator=(const Character& otherCharacter)
{
    name = otherCharacter.name;
    int i = 0;
    while (i < 4) {
        if (otherCharacter.inventory[i]) {
            inventory[i] = otherCharacter.inventory[i]->clone();
        }
        else {
            inventory[i] = NULL;
        }
        i++;
    }
    i = 0;
    while (i < 100) {
        if (floor[i]) {
            delete floor[i];
        }
        floor[i] = NULL;
        i++;
    }
    floorIndex = 0;
    return *this;
}

Character::~Character()
{
    int i = 0;
    while (i < 4) {
        if (inventory[i]) {
            delete inventory[i];
        }
        i++;
    }
    i = 0;
    while (i < 100) {
        if (floor[i]) {
            delete floor[i];
        }
        i++;
    }
}

std::string const& Character::getName(void) const
{
    return name;
}

void Character::equip(AMateria *materia)
{
    if (!materia) {
        return ;
    }
    int i = 0;
    while (i < 4) {
        if (!inventory[i]) {
            inventory[i] = materia;
            return ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx >=0 && idx < 4 && inventory[idx]) {
        if (floorIndex < 100) {
           floor[floorIndex] = inventory[idx];
           inventory[idx] = NULL;
           floorIndex++; 
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        inventory[idx]->use(target);
    }
}