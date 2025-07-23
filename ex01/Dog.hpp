/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:24:49 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:56:30 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
#define _DOG_HPP_

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog& anotherAnimal);
		Dog& operator=(const Dog& anotherAnimal);
		~Dog();
		std::string getType(void) const;
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif /* _DOG_HPP_ */