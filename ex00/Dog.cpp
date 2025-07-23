/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:25 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 18:38:06 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& anotherAnimal)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = anotherAnimal;
}
Dog& Dog::operator=(const Dog& anotherAnimal)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	type = anotherAnimal.type;
	return *this;
}
		
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType(void) const
{
	return type;
}

void Dog::makeSound(void) const
{
	std::cout << getType() << " barks" << std::endl;
}
