/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:24:30 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:25:43 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>

class Brain {
    public: 
        std::string ideas[100];
        Brain () ;
        Brain (const Brain &o);
        Brain &operator=(const Brain &o); 
        ~Brain ();
} ;

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
        void                        setType (const std::string type) ;
        
};



