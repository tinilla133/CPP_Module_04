/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:25 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:56:46 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& anotherAnimal)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = anotherAnimal;
}
Dog& Dog::operator=(const Dog& anotherAnimal)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	brain = new Brain(*anotherAnimal.brain);
	type = anotherAnimal.type;
	return *this;
}
		
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

std::string Dog::getType(void) const
{
	return type;
}

void Dog::makeSound(void) const
{
	std::cout << getType() << " barks" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return brain;
}
