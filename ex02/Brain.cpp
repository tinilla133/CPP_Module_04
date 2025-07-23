/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:28:03 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:51:03 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Generic brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& anotherBrain)
{
	std::cout << "Generic animal copy constructor called" << std::endl;
	*this = anotherBrain;
}

Brain& Brain::operator=(const Brain& anotherBrain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
    int i = 0;
    while (i < BRAIN_SIZE) {
        if (anotherBrain.ideas[i].length() > 0) {
			ideas[i] = anotherBrain.ideas[i];
        }
        i++;
    }
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string Brain::getIdea(uint8_t i) const
{
	if (i < BRAIN_SIZE) {
		return (ideas[i]);
	}
	return "";
}
	
void Brain::setIdea(uint8_t i, const std::string idea)
{
	if (i < BRAIN_SIZE) {
		ideas[i] = idea;
		return ;
	}
	std::cout << "My brain is full." << std::endl;
}

const std::string *Brain::getIdeaAddress(uint8_t i) const
{
	if (i < BRAIN_SIZE) {
		return &ideas[i];
	}
	return NULL;
}