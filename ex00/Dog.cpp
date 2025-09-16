/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:01:13 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/16 16:47:04 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Calling default Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.type;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Guau" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

