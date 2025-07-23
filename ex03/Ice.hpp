/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:52:10 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/12 21:25:50 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
#define _ICE_HPP_

#include "AMateria.hpp"

class Ice  : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& otherIce);
        Ice& operator=(const Ice& otherIce);
        virtual ~Ice();
        virtual AMateria *clone() const;
        void use(ICharacter& target);
};

#endif /* _ICE_HPP_ */