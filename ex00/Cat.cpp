/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:35:47 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:09:37 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat () : Animal () {
    std::cout << " .. Cat default constructor called .. " << std::endl;
    this->_type = "Cat";
}

Cat::Cat (const std::string type) : Animal (type) {
    this->_type = type; 
}

Cat::~Cat () {
    std::cout << " .. Cat destructor called .. " << std::endl;
}

Cat &Cat::operator=(const Cat &o) {
    if(this != &o)
    {
        Animal::operator=(o);
        this->_type = o._type;
    }
    return *this; 
} 

Cat::Cat (const Cat &o) : Animal (o) {
    this->_type = o._type;
}

std::string Cat::getType (void) const {
    return (_type);
}

void Cat::makeSound (void) const {
    std::cout << "[ sound ] Miao" << std::endl;
}
