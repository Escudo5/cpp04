/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:09:49 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 15:15:10 by smarquez         ###   ########.fr       */
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
    
}

std::string  const &Character::getName()const
{
    return(name);    
}

