/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:33:35 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:09:58 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal () : _type("") {
    std::cout << " .. Animal default constructor called .. " << std::endl;
    this->_type = "";
}

Animal::Animal (const std::string type) {
    std::cout << " .. Animal param constructor called .. " << std::endl;
    this->_type = type; 
}

Animal::~Animal () {
    std::cout << " .. Animal destructor called .. " << std::endl;
}

Animal &Animal::operator=(const Animal &o) {
    if(this != &o)
        this->_type = o._type;
    return *this; 
} 

Animal::Animal (const Animal &o) {
    this->_type = o._type;
}

std::string Animal::getType (void) const {
    return (_type);
}

void Animal::makeSound (void) const {
    std::cout << "[ no sound ] Animal sound" << std::endl;
}
