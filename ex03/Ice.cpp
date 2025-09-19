/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:04:56 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 16:35:23 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"



//no hace falta constructor de string en Ice porque usamos el de AMateria con el type "ice".

Ice::Ice()  : AMateria("ice")
{

}

Ice::Ice(const Ice &copy) : AMateria(copy)
{

}

// Ice &Ice::operator=(const Ice &copy)
// {
//     if (this != &copy)
//         AMateria::operator=(copy);
//     return(*this);
// }

Ice::~Ice()
{
    
}


AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout <<  " *shoots an ice bolt at " <<  target.getName() << " *" <<std::endl;
}