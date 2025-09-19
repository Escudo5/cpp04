/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:31:31 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 13:03:47 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:

        Character();
        Character(std::string name);
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        ~Character();

    private:
    
        std::string name;
        AMateria *inventory[4];
};


#endif