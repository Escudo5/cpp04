/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:20:07 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 14:00:08 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->type = copy.type;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Calling cat destructor" << std::endl;
}

