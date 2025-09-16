/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:58:02 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/16 16:47:17 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "String constructor called " << type << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &copy)
{
    this->type = copy.type;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "No animal, so no sound paying... " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType()const
{
    return(this->type);
}