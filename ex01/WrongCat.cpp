/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:57:02 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/17 12:52:42 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default cat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    this->type = copy.type;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Meow " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Calling cat destructor" << std::endl;
}

