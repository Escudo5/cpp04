/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:05:26 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 15:45:57 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>


class ICharacter;
class AMateria
{
    protected:
        std::string type;
    public:

        AMateria();
        // AMateria(const AMateria &copy);
        // AMateria &operator=(const AMateria &copy);
        virtual ~AMateria();
        

    
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        
};


#endif