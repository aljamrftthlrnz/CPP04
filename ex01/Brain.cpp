/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:07:21 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:25:16 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Brain::Brain () {
    std::cout << " .. Brain default constructor called .. " << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = ""; 
}

Brain::Brain (const Brain &o) {
    std::cout << " .. Brain copy constructor called .. " << std::endl;
    // Deep copy of each idea 
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = o.ideas[i]; 
}

Brain &Brain::operator=(const Brain &o) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &o) {  // Avoid self-assignment
        for (int i = 0; i < 100; ++i) 
            this->ideas[i] = o.ideas[i];  // Deep copy of each idea
    }
    return *this;
}

Brain::~Brain () {
    std::cout << " .. Brain destructor called .. " << std::endl;
    // it's a stack-allocated array - no delete
}
