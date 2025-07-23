/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:01:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 18:37:06 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Generic animal default constructor called" << std::endl;
}
Animal::Animal(const Animal& anotherAnimal)
{
	std::cout << "Generic animal copy constructor called" << std::endl;
	*this = anotherAnimal;
}
Animal& Animal::operator=(const Animal& anotherAnimal)
{
	std::cout << "Generic animal copy assignment operator called" << std::endl;
	type = anotherAnimal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Generic animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::makeSound(void) const
{
	std::cout << type << " makes a sound" << std::endl;
}
