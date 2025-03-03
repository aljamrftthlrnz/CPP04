/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:42:07 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:36:28 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog () : AAnimal () , _brain (NULL) {
    std::cout << " .. Dog default constructor called .. " << std::endl;
    _brain = new Brain ();
    this->_type = "Dog";
}

Dog::Dog (const std::string type) : AAnimal (type) {
    this->_type = type; 
}

Dog::~Dog () {
    delete _brain; 
    std::cout << " .. Dog destructor called .. " << std::endl;
}

Dog &Dog::operator=(const Dog &o) {
    if(this != &o)
    {
        AAnimal::operator=(o);
        delete _brain; // Free existing Brain memory to avoid memory leaks
        _brain = new Brain (); 
        *(this->_brain) = (*o._brain); 
        this->_type = o._type;
    }
    std::cout << " .. Dog assignment operator called .. " << std::endl;
    return *this; 
} 

Dog::Dog (const Dog &o) : AAnimal (o),  _brain (NULL) {
    _brain = new Brain (*o._brain);
    this->_type = o._type;
    std::cout << " .. Dog copy constructor called .. " << std::endl;
}

std::string Dog::getType (void) const {
    return (_type);
}

void Dog::makeSound (void) const {
    std::cout << "[ sound ] Woof" << std::endl;
}

