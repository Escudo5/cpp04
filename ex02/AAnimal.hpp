/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:42:31 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 14:14:25 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class AAnimal
{
  
    public:

        AAnimal();
        AAnimal(const AAnimal &copy);
        AAnimal(std::string name);
        AAnimal &operator=(const AAnimal &copy);
        virtual ~AAnimal();
    
        virtual void makeSound() const = 0;
        std::string getType()const;
        

        
    protected:
        std::string type;


    private:
    


    
};











#endif