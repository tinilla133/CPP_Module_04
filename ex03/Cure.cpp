/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:32:13 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 21:48:31 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void) : AMateria("cure")
{
    
}

Cure::Cure(const Cure& otherCure) : AMateria(otherCure)
{
    
}

Cure& Cure::operator=(const Cure& otherCure)
{
    AMateria::operator=(otherCure);
    return *this;
}

Cure::~Cure()
{
    
}

AMateria* Cure::clone(void) const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}