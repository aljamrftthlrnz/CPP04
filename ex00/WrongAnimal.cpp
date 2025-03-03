/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:55:46 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:07:06 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : _type("") {
    std::cout << " .. WrongAnimal default constructor called .. " << std::endl;
    this->_type = "";
}

WrongAnimal::WrongAnimal (const std::string type) {
    std::cout << " .. WrongAnimal param constructor called .. " << std::endl;
    this->_type = type; 
}

WrongAnimal::~WrongAnimal () {
    std::cout << " .. WrongAnimal destructor called .. " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &o) {
    if(this != &o)
        this->_type = o._type;
    return *this; 
} 

WrongAnimal::WrongAnimal (const WrongAnimal &o) {
    this->_type = o._type;
}

std::string WrongAnimal::getType (void) const {
    return (_type);
}

void WrongAnimal::makeSound (void) const {
    std::cout << "[ no sound ] Animal sound" << std::endl;
}

/*_________________________________________________________________*/

WrongCat::WrongCat () : WrongAnimal () {
    std::cout << " .. WrongCat default constructor called .. " << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat (const std::string type) : WrongAnimal (type) {
    this->_type = type; 
}

WrongCat::~WrongCat () {
    std::cout << " .. WrongCat destructor called .. " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &o) {
    if(this != &o)
    {
        WrongAnimal::operator=(o);
        this->_type = o._type;
    }
    return *this; 
} 

WrongCat::WrongCat (const WrongCat &o) : WrongAnimal (o) {
    this->_type = o._type;
}

std::string WrongCat::getType (void) const {
    return (_type);
}

void WrongCat::makeSound (void) const {
    std::cout << "[ sound ] Miao" << std::endl;
}