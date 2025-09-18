/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:23:57 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/18 17:52:13 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        ~Cure();


        AMateria* clone() const;




    
};


#endif