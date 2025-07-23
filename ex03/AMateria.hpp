/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:45:29 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 21:51:15 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
#define  _AMATERIA_HPP_

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;
class AMateria
{
    protected:
        std::string type;
    public:
    AMateria(std::string const &type);
    AMateria(const AMateria& otherAMateria);
    AMateria& operator=(const AMateria& otherMateria);
    virtual ~AMateria();
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif /* _AMATERIA_HPP_ */