/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:42:31 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/16 16:41:37 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal
{
  
    public:

        Animal();
        Animal(const Animal &copy);
        Animal(std::string name);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();
    
        virtual void makeSound() const;
        std::string getType()const;
        

        
    protected:
        std::string type;


    private:
    


    
};











#endif