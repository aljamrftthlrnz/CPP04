/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:03:45 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:44:08 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : virtual public AAnimal {
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