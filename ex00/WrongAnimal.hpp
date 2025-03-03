/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:55:39 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:06:06 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class WrongAnimal {
     protected :  
        std::string _type;
    public :
        WrongAnimal ();
        WrongAnimal (const std::string type);
        WrongAnimal (const WrongAnimal &o);
        WrongAnimal &operator=(const WrongAnimal &o); 
        // not virtual
        ~WrongAnimal ();
        // not virtual
        void                makeSound (void) const ;
        std::string                 getType (void) const ; 
};

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat (const std::string type);
        WrongCat (const WrongCat &o);
        WrongCat &operator=(const WrongCat &o); 
        ~WrongCat ();
        
        void makeSound (void) const ;
        std::string getType (void) const;
};