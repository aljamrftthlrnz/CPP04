/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:50:37 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/07 17:23:24 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    int size = 8; 
    Animal *animal [size];
        
    // std::cout << std::endl;
    // const Animal* meta = new Animal();
    // std::cout << std::endl;
    // const Animal* dog = new Dog();
    // std::cout << std::endl;
    // const Animal* cat = new Cat();
    // std::cout << std::endl;

    std::cout << "Create Deep copy of cat" << std::endl; 
    for (int i = 0; i < size / 2; ++i)
    {
        animal[i] = new Cat (); 
        std::cout << "c: " << i << std::endl; 
    }
    std::cout << std::endl; 
    std::cout << "Create Deep copy of Dog" << std::endl;
    for (int i = size / 2; i < size; ++i)
    {
        animal[i] = new Dog (); 
        std::cout << "d: " << i << std::endl;    
    }
    for (int i = 0; i < 8; i++)
        delete animal[i];
    
    // std::cout << std::endl;
    // Dog tmp; 
    // Dog basic = tmp; 
    // std::cout << std::endl;
    // std::cout << "\n--- Exiting program ---" << std::endl;
    // meta->makeSound(); 
    // std::cout << "Type .. ";
    // std::cout << dog->getType() << " " << std::endl;
    // dog->makeSound();
    // std::cout << "Type .. ";
    // std::cout << cat->getType() << " " << std::endl;
    // cat->makeSound(); 
    // std::cout << std::endl;
    // std::cout << std::endl;
    return 0;
}