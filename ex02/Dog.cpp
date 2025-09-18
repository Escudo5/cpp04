/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:01:13 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 15:56:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    brain = new Brain();
    std::cout << "Calling default Dog constructor" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    brain = new Brain(*copy.brain);
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Guau" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor" << std::endl;
}

