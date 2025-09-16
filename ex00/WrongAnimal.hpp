/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:49:10 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/16 16:56:10 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal(std::string name);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();
    
        void makeSound() const;
        std::string getType()const;
        

        
    protected:
        std::string type;

};


#endif