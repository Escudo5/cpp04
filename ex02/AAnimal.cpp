/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:58:02 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 16:03:20 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    std::cout << "String constructor called " << type << std::endl;
    this->type = type;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    this->type = copy.type;
    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
    this->type = copy.type;
    return(*this);
}

void AAnimal::makeSound() const
{
    std::cout << "No AAnimal, so no sound paying... " << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}

std::string AAnimal::getType()const
{
    return(this->type);
}