/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:03:45 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/08 13:24:03 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog : public Animal {
    private: 
        Brain* _brain; 
        Dog (const std::string type);
    public :
        Dog ();
        Dog (const Dog &o);
        Dog &operator=(const Dog &o); 
        ~Dog ();

        void makeSound (void) const ;
        std::string getType (void) const ;
};