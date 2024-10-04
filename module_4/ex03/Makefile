# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 10:53:06 by clundber          #+#    #+#              #
#    Updated: 2024/10/04 22:45:00 by casimirri        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

# ------------ PROJECT -------#
NAME = materia

#------------- SOURCE FILES ------#
CFILES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OFILES = $(CFILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

#--------- FLAGS ----------#
CC = @c++
CFLAGS = -Wall -Wextra -Werror -std=c++11

#------------------#

all: $(NAME)

$(NAME): $(OFILES)
	@echo "$(COLOUR_BLUE)compiling $(NAME)$(COLOUR_END)"
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME) 
	@echo "$(COLOUR_GREEN)$(NAME) compiled successfully$(COLOUR_END)"

clean:
	@echo "$(COLOUR_GREEN)cleaning $(NAME)$(COLOUR_END)"
	@rm -f $(OFILES) 

fclean: clean
	@rm -f $(NAME) 
	@rm -f $(OFILES)  

re: fclean all 

.PHONY: all clean fclean re