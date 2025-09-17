/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:51:50 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/17 12:59:56 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "String constructor called " << type << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    return(*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "No  wrong animal, so no sound paying... " << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal destructor" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return(this->type);
}