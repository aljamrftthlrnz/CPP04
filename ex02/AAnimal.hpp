/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:24:30 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/04 21:17:05 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>

// HIERARCHICAL INHERITANCE  
// BASE CLASS
class AAnimal {
    protected :  
        std::string _type;
    public : 
        AAnimal ();
        AAnimal (const std::string type);
        AAnimal (const AAnimal &o);
        AAnimal &operator=(const AAnimal &o); 
        virtual ~AAnimal ();

        virtual void                makeSound (void) const = 0 ;
        std::string                 getType (void) const ;   
        void                        setType (const std::string type) ;
        
};



