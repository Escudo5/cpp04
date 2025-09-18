/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:20:07 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 15:58:46 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    brain = new Brain();
    std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    brain = new Brain(*copy.brain);
    this->type = copy.type;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow " << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Calling cat destructor" << std::endl;
}

