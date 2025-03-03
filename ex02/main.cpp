/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:50:37 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/08 13:13:49 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{ 
    ///AAnimal m; 
    Cat cat; 
    Cat tmp; 
    tmp = cat; 
    Dog dog; 
 
    std::cout << "Type .. ";
    std::cout << dog.getType() << " " << std::endl;
    dog.makeSound();
    std::cout << "Type .. ";
    std::cout << cat.getType() << " " << std::endl;
    cat.makeSound(); 
    std::cout << std::endl;
    return 0;
}