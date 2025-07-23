/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:35:13 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 19:54:47 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
    int i = 0;
    while (i < 4) {
        templates[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource& otherMateriaSource) 
{
    int i = 0;
    while (i < 4) {
        if (templates[i]) {
            templates[i] = otherMateriaSource.templates[i];
        }
        i++;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& otherMateriaSource)
{
    int i = 0;
    while (i < 4) {
        if (templates[i]) {
            delete templates[i];
            otherMateriaSource.templates[i]->clone();
        }
        else {
            templates[i] = NULL;
        }
        i++;
    }
    return *this;
}

MateriaSource::~MateriaSource() 
{
    int i = 0;
    while (i < 4) {
        if (templates[i]) {
            delete templates[i];
        }
        i++;
    }
}

void MateriaSource::learnMateria(AMateria* materia) 
{
    int i = 0;
    while (i < 4) {
        if (!templates[i]) {
            templates[i] = materia->clone();
            break;
        }
        i++;
    }
    if (materia) {
        delete materia;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4) {
        if (templates[i] && templates[i]->getType() == type) {
            return templates[i]->clone();
        }
        i++;
    }
    return 0;
}
