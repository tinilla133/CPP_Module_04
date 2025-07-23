/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:24:49 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 23:04:20 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGDOG_HPP_
#define _WRONGDOG_HPP_

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
	public:
		WrongDog(void);
		WrongDog(const WrongDog& anotherAnimal);
		WrongDog& operator=(const WrongDog& anotherAnimal);
		~WrongDog();
		std::string getType() const;
};

#endif /* _DOG_HPP_ */