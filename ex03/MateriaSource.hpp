/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:03:59 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 20:37:28 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* templates[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& otherMateriaSource);
        MateriaSource& operator=(const MateriaSource& otherMateriaSource);
        ~MateriaSource();
        void learnMateria(AMateria *materia);
        AMateria* createMateria(std::string const& materia);
};

#endif /* _MATERIASOURCE_HPP_ */