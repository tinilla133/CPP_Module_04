/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:01:58 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 23:03:59 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
#define _WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& anotherAnimal);
		WrongAnimal& operator=(const WrongAnimal& anotherAnimal);
		virtual ~WrongAnimal();
		std::string getType() const;
		void makeSound(void) const;
};

#endif /* _ANIMAL_HPP_ */