/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:26:56 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:56:41 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& anotherAnimal)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = anotherAnimal;
}

Cat& Cat::operator=(const Cat& anotherAnimal)
{
	std::cout << "Cat copy assignmnet operator called" << std::endl;
	brain = new Brain(*anotherAnimal.brain);
	type = anotherAnimal.type;
	return *this;
}
		
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

std::string Cat::getType() const
{
	return type;
}

void Cat::makeSound(void) const
{
	std::cout << getType() << " meows" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return brain;
}
