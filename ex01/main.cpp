/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:57:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/22 19:46:00 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "\n====== Creating array of Animals ======\n";
    const int arr_size = 4, brain_ideas_nbr = 6; 
    Animal* animals[arr_size];
	int n = 0;

	while (n < arr_size) {
		if (!(n % 2)) {
            animals[n] = new Dog();
        }
        else {
            animals[n] = new Cat();
        }
        int m = 0;
        while (m < brain_ideas_nbr) {           
                Brain *dog_brain = animals[n]->getBrain();
                std::string aux_str;
                std::ostringstream oss;
                oss << "This is the idea number " << m + 1 << " of animal number " << n + 1 << " which is a " << animals[n]->getType();
                std::string idea = oss.str();
                dog_brain->setIdea(m, idea);
                std::cout << dog_brain->getIdea(m) << std::endl;
                m++;
        }
		n++;
	}

    std::cout << "\n====== Creating a copy of an animal of array using copy constructor ======\n";
    
    Animal* otherAnimals[arr_size];
    
    n = 0;
    while (n < arr_size) {
        if (dynamic_cast<Dog*>(animals[n])) {
            otherAnimals[n] = new Dog(*dynamic_cast<Dog*>(animals[n]));
        } 
        else if (dynamic_cast<Cat*>(animals[n])) {
            otherAnimals[n] = new Cat(*dynamic_cast<Cat*>(animals[n]));
        }
        n++;
    }
    
    std::cout << "\n====== Showing their addresses ======\n";
    
    n = 0;
    while (n < arr_size) {
        Brain *aux_brain = animals[n]->getBrain();
        Brain *aux_brain_2 = otherAnimals[n]->getBrain();
        std::cout << "Address of original animal " << n + 1 << " " << animals[n] << " === " << 
                "Adddress of its brain " << aux_brain << std::endl;
        int m = 0;
        while (m < brain_ideas_nbr) {           
            std::cout << "\tAddress of its idea number " << m + 1 << aux_brain->getIdeaAddress(m) << std::endl;
            m++;
        }
        std::cout << "Address of copied animal " << n + 1 << "   " << otherAnimals[n] << " === " << 
                "Adddress of its brain " << aux_brain_2 << std::endl;
        m = 0;
        while (m < brain_ideas_nbr) {           
            std::cout << "\tAddress of its idea number " << m + 1 << aux_brain_2->getIdeaAddress(m) << std::endl;
            m++;
        }
        n++;
    }

    std::cout << "\n====== Deleting other array of Animals\n";

    n = 0;
	while (n < arr_size)
	{
        delete otherAnimals[n];
		n++;
	}
    
    std::cout << "\n====== Creating a copy of an animal of array with copy assignment operator ======\n";

    n = 0;
    while (n < arr_size) {
        if (dynamic_cast<Dog*>(animals[n])) {
            otherAnimals[n] = new Dog();;
        } 
        else if (dynamic_cast<Cat*>(animals[n])) {
            otherAnimals[n] = new Cat();
        }
        *otherAnimals[n] = *animals[n];
        n++;
    }
    
    std::cout << "\n====== Deleting all arrays of Animals ======\n";
    
	n = 0;
	while (n < arr_size)
	{
		delete animals[n];
        delete otherAnimals[n];
		n++;
	}
    return 0;
}
