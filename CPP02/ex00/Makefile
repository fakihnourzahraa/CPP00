# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfakih <nfakih@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 14:22:37 by nfakih            #+#    #+#              #
#    Updated: 2026/01/05 14:24:43 by nfakih           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_first_orthodox_canonical_form

SRC = Fixed.cpp  main.cpp
OBJ = $(SRC:.cpp=.o)

CC  = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@echo "🏂 done making"

%.o: %.cpp
	@$(CC) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "💄 done cleaning"

fclean: clean
	@rm -f $(NAME)
	@echo "👺 done fcleaning"

re: fclean all

ex: all clean

.PHONY: all clean fclean re ex