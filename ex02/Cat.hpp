/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:45:18 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 15:58:54 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat();
    
        void makeSound()const;
        std::string getType()const;

    
};

#endif
