/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:31:31 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/19 15:13:28 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:

        // Character();
        Character(std::string name);
        // Character(const Character &copy);
        // Character &operator=(const Character &copy);
        virtual ~Character();

        void equip(AMateria* m);
        void unequip(int indx);
        void use(int idx, ICharacter &target);
        std::string const &getName() const;

    private:
    
        std::string name;
        AMateria *inventory[4];
};


#endif