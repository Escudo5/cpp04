/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:20:25 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 16:35:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"


Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure (const Cure &copy) : AMateria(copy)
{

}

// Cure &Cure::operator=(const Cure &copy)
// {
//     if (this != &copy)
//         AMateria::operator=(copy);
//     return(*this);
// }

Cure::~Cure()
{
    
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout <<  " *heals " <<  target.getName() << " wounds *" <<std::endl;
}

