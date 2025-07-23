/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:01:58 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:32:21 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& anotherAnimal);
		Animal& operator=(const Animal& anotherAnimal);
		virtual ~Animal();
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif /* _ANIMAL_HPP_ */