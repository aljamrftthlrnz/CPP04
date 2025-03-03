/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:33:35 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/07 17:52:42 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal () : _type("") {
    std::cout << " .. AAnimal default constructor called .. " << std::endl;
    this->_type = "";
}

AAnimal::AAnimal (const std::string type) {
    std::cout << " .. AAnimal param constructor called .. " << std::endl;
    this->_type = type; 
}

AAnimal::~AAnimal () {
    std::cout << " .. AAnimal destructor called .. " << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &o) {
    if(this != &o)
        this->_type = o._type;
    return *this; 
} 

AAnimal::AAnimal (const AAnimal &o) {
    *this = o; 
}

void AAnimal::setType (const std::string type) {
     this->_type = type;
}

std::string AAnimal::getType (void) const
{
    return (_type);
}

void AAnimal::makeSound (void) const {
    std::cout << "[ no sound ] AAnimal sound" << std::endl;
}

