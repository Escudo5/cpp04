/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:39:18 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 15:46:43 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"


AMateria::AMateria(std::string const & type) : type(type)
{
    
}

AMateria::~AMateria()
{
    
}



std::string const & AMateria::getType() const
{
    return(type);       
}


void AMateria::use(ICharacter &target)
{
    target;
}
        