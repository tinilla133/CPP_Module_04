/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:25 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 23:04:16 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	std::cout << "Wrong Dog default constructor called" << std::endl;
	type = "Wrong Dog";
}

WrongDog::WrongDog(const WrongDog& anotherAnimal)
{
	std::cout << "Wrong Dog copy constructor called" << std::endl;
	*this = anotherAnimal;
}
WrongDog& WrongDog::operator=(const WrongDog& anotherAnimal)
{
	std::cout << "Wrong Dog copy assignment operator called" << std::endl;
	type = anotherAnimal.type;
	return *this;
}
		
WrongDog::~WrongDog()
{
	std::cout << "Wrong Dog destructor called" << std::endl;
}

std::string WrongDog::getType() const
{
	return type;
}

