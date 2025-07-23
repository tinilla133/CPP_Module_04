/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:01:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 18:38:41 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Wrong animal")
{
	std::cout << "Generic wrong animal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& anotherAnimal)
{
	std::cout << "Generic wrong animal copy constructor called" << std::endl;
	*this = anotherAnimal;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& anotherAnimal)
{
	std::cout << "Generic wrong animal copy assignment operator called" << std::endl;
	type = anotherAnimal.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Generic wrong animal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << type << " makes a sound" << std::endl;
}
