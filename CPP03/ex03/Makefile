# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 19:11:41 by tboumadj@student  #+#    #+#              #
#    Updated: 2023/03/28 08:47:46 by tboumadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FLAG

NAME		=		DiamondTrap
CC			=		c++
FLAGS		=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -f
CHECK		=		-fsanitize=address

#PATH

SRCS		=		src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp
OBJS		=		$(SRCS:.cpp=.o)
HEADER	=		inc/ClapTrap.hpp

#COLORS

_GREY		=		$'\x1b[33m
_GREEN	=		$'\x1b[32m

##

.o : .c $(HEADER) Makefile
								@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME):	$(OBJS)
									@echo "$(_GREY)Compilation de DiamondTrap en cours...$(_END)"
									$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)
									@echo "$(_GREEN)$(_BOLD)Fin de la compilation!$(_END)"

.SILENT	: $(OBJS) $(NAME)

all	:		$(NAME)

clean	:
				@$(RM) $(OBJS)

fclean	:	clean
					@$(RM) $(NAME)
					@echo "$(_GREEN)$(_BOLD)Exec & .o have been erased!$(_END)"
re	:	 fclean all

.PHONY	:	all clean fclean re
