/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:26:56 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 23:04:05 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Wrong Cat default constructor called" << std::endl;
	type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat& anotherAnimal)
{
	std::cout << "Wrong Cat copy constructor called" << std::endl;
	*this = anotherAnimal;
}

WrongCat& WrongCat::operator=(const WrongCat& anotherAnimal)
{
	std::cout << "Wrong Cat copy assignmnet operator called" << std::endl;
	type = anotherAnimal.type;
	return *this;
}
		
WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}

