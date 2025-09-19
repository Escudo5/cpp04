/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:09:49 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 13:24:52 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for(int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{

}

Character::Character(const Character &copy)
{
    this->name  = copy.name;
}

Character &Character::operator=(const Character &copy)
{
    
}

Character::~Character()
{
    
}

