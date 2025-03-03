/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:35:47 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:40:04 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat () : AAnimal () {
    std::cout << " .. Cat default constructor called .. " << std::endl;
    // Dynamically allocates memory for Brain object when Cat is created
    _brain = new Brain ();
    this->_type = "Cat"; 
}

Cat::Cat (const std::string type) : AAnimal (type) {
    this->_type = type; 
}

Cat::Cat (const Cat &o) : AAnimal (o),  _brain (NULL) {
    _brain = new Brain ();
    *(this->_brain) = *(o._brain);
    this->_type = o._type;
}

Cat &Cat::operator=(const Cat &o) {
    if(this != &o)
    {
        AAnimal::operator=(o);
        delete _brain; // Free existing Brain memory to avoid memory leaks
        _brain = new Brain (); 
        *(this->_brain) = (*o._brain); 
        this->_type = o._type;
    }
    std::cout << " .. Cat assignment operator called .. " << std::endl;
    return *this; 
} 

Cat::~Cat () {
    delete _brain; 
    std::cout << " .. Cat destructor called .. " << std::endl;
}

std::string Cat::getType (void) const {
    return (_type);
}

void Cat::makeSound (void) const {
    std::cout << "[ sound ] Miao" << std::endl;
}

