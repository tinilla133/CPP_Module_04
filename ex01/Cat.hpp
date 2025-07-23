/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:48 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:56:35 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
#define _CAT_HPP_

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain* brain;
	public:
		Cat(void);
		Cat(const Cat& anotherAnimal);
		Cat& operator=(const Cat& anotherAnimal);
		~Cat();
		std::string getType(void) const;
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif /* _CAT_HPP_ */