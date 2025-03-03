/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:24:30 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 14:57:28 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>

// HIERARCHICAL INHERITANCE  
// BASE CLASS
class Animal {
    protected :  
        std::string _type;
    public :
        Animal ();
        Animal (const std::string type);
        Animal (const Animal &o);
        Animal &operator=(const Animal &o); 
        virtual ~Animal ();

        virtual void                makeSound (void) const ;
        std::string                 getType (void) const ;   
        
};
