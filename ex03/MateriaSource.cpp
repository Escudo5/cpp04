/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:47:19 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 16:34:55 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        learned[i] = NULL;
}


MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (learned[i] != NULL)
            delete(learned[i]);
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!learned[i])
        {
            learned[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4 ; i++)
    {
        if (learned[i] && learned[i]->getType() == type)
        {
            if (type == "cure")
                return new Cure;
            if (type == "ice")
                return new Ice;
        }
    }
    return NULL;
}