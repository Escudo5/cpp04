/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:25:03 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 16:01:25 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}




//comprobar leaks y añadir delete si necesario en main.