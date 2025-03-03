/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:42:07 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:08:31 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog () : Animal () {
    std::cout << " .. Dog default constructor called .. " << std::endl;
    this->_type = "Dog";
}

Dog::Dog (const std::string type) : Animal (type) {
    this->_type = type; 
}

Dog::~Dog () {
    std::cout << " .. Dog destructor called .. " << std::endl;
}

Dog &Dog::operator=(const Dog &o) {
    if(this != &o)
    {
        Animal::operator=(o); 
        this->_type = o._type;
    }
    return *this; 
} 

Dog::Dog (const Dog &o) : Animal (o) {
    this->_type = o._type;
}

std::string Dog::getType (void) const {
    return (_type);
}

void Dog::makeSound (void) const {
    std::cout << "[ sound ] Woof" << std::endl;
}