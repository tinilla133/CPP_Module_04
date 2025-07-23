/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:11:29 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 21:51:36 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria& otherAMateria)
{
    *this = otherAMateria;
}

AMateria& AMateria::operator=(const AMateria& otherAmateria)
{
    type = otherAmateria.type;
    return *this;
}

AMateria::~AMateria()
{
    
}

std::string const& AMateria::getType() const 
{
    return type;    
}
