/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:52:10 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 21:49:59 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"
class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& otherCure);
        Cure& operator=(const Cure& otherCure);
        virtual ~Cure();
        virtual AMateria *clone() const;
        void use(ICharacter& target);
};

#endif /* _CURE_HPP_ */