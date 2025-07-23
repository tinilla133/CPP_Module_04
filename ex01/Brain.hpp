/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:28:21 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:48:03 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#define BRAIN_SIZE 10

#include <iostream>
#include <string>
#include <stdint.h>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& anotherBrain);
		Brain& operator=(const Brain& anotherBrain);
		~Brain();
		const std::string getIdea(uint8_t i) const;
		void setIdea(uint8_t i, const std::string idea);
		const std::string *getIdeaAddress(uint8_t i) const;
};

#endif /* _BRAIN_HPP_ */
