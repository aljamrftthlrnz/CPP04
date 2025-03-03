/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:03:41 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/08 13:20:04 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class Cat : public Animal {
    private :
        Brain* _brain; 
        Cat (const std::string type);
    public :
        Cat();
        Cat (const Cat &o);
        Cat &operator=(const Cat &o); 
        ~Cat ();

        void makeSound (void) const ;
        std::string getType (void) const;
};