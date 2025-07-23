/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:53:46 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 20:22:47 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include "ICharacter.hpp"

class  Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
        AMateria* floor[100];
        int floorIndex;
    public:
        Character(std::string const name);
        Character(const Character& otherCharacter);
        Character& operator=(const Character& otherCharacter);
        ~Character();
        std::string const& getName(void) const;
        void equip(AMateria* materia);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif /* _CHARACTER_HPP_ */