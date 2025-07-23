/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:48 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/23 23:04:11 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
#define _WRONGCAT_HPP_

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& anotherAnimal);
		WrongCat& operator=(const WrongCat& anotherAnimal);
		~WrongCat();
		std::string getType() const;
};

#endif /* _WRONGCAT_HPP_ */