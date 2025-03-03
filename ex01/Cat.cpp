/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:35:47 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:20:28 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat () : Animal () ,_brain(NULL) {
    std::cout << " .. Cat default constructor called .. " << std::endl;
    // Dynamically allocates memory for Brain object when Cat is created
    _brain = new Brain ();
    this->_type = "Cat"; 
}

Cat::Cat (const std::string type) : Animal (type) {
    this->_type = type; 
}

Cat::~Cat () {
    delete _brain; 
    std::cout << " .. Cat destructor called .. " << std::endl;
}

Cat::Cat (const Cat &o) : Animal (o) {
    _brain = new Brain (*o._brain);
    this->_type = o._type;
}

Cat &Cat::operator=(const Cat &o) {
    if(this != &o)
    {
        Animal::operator=(o);
        // hier kommt es zu keiner Konstruktion sonder einem assignment
        delete _brain; // Free existing Brain memory to avoid memory leaks
        _brain = new Brain (*o._brain); // Deep copy the Brain object
        this->_type = o._type;
    }
    std::cout << " .. Cat assignment operator called .. " << std::endl;
    return *this; 
} 

std::string Cat::getType (void) const {
    return (_type);
}

void Cat::makeSound (void) const {
    std::cout << "[ sound ] Miao" << std::endl;
}
