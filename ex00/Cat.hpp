/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:03:41 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 14:59:38 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class Cat : public Animal {
    public :
        Cat();
        Cat (const std::string type);
        Cat (const Cat &o);
        Cat &operator=(const Cat &o); 
        ~Cat ();

        void makeSound (void) const ;
        std::string getType (void) const;
};
