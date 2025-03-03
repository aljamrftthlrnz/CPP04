/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:50:37 by amirfatt          #+#    #+#             */
/*   Updated: 2024/10/09 14:58:54 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    std::cout << std::endl;
    const Animal* meta = new Animal();
    std::cout << std::endl;
    const Animal* dog = new Dog();
    std::cout << std::endl;
    const Animal* cat = new Cat();
    std::cout << std::endl;
    const WrongAnimal* wrongcat = new WrongCat (); 


    meta->makeSound(); 
    std::cout << "Type .. ";
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << "Type .. ";
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << " **** Wrong Sound **** " << std::endl;
    wrongcat->makeSound(); 
    std::cout << std::endl;
    std::cout << std::endl;
    delete cat;
    std::cout << std::endl;
    delete dog; 
    std::cout << std::endl;
    delete meta; 
    std::cout << std::endl;
    delete wrongcat; 
    std::cout << std::endl;
    return 0;
}