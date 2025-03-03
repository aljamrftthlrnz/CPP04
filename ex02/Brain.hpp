/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:42:57 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 15:43:29 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AAnimal.hpp"

class Brain {
    public: 
        std::string ideas[100];
    
        Brain () ;
        Brain (const Brain &o);
        Brain &operator=(const Brain &o); 
        ~Brain ();
} ;
