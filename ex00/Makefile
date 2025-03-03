# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 13:02:40 by amirfatt          #+#    #+#              #
#    Updated: 2024/10/09 15:02:58 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp

OBJECT = $(SOURCE:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJECT)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re