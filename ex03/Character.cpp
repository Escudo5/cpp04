/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:09:49 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 16:18:49 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Character::Character()
// {
//     for(int i = 0; i < 4; i++)
//         this->inventory[i] = NULL;
// }

Character::Character(std::string name) : name(name)
{
    for(int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

// Character::Character(const Character &copy)
// {
//     this->name  = copy.name;
//     for(int i = 0; i < 4; i++)
//     {
//         if (copy.inventory == NULL)
//             inventory[i] = NULL;
//     }
// }

// Character &Character::operator=(const Character &copy)
// {
//     if (this != &copy)
//     {
//         delete (this->inventory);
        
//     }
// }

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] != NULL)
            delete (inventory[i]);
    }
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

std::string  const &Character::getName()const
{
    return(name);    
}


void Character::unequip(int indx)
{
    if (indx < 0 || indx >= 4)
        return;
    if (inventory[indx])
        inventory[indx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (inventory[idx])
        inventory[idx]->use(target);
}