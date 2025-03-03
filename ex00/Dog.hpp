/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:03:45 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/07 16:29:18 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog : public Animal {
    public :
        Dog ();
        Dog (const std::string type);
        Dog (const Dog &o);
        Dog &operator=(const Dog &o); 
        ~Dog ();

        void makeSound (void) const ;
        std::string getType (void) const ;
};