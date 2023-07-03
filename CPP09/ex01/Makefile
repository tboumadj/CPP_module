# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 19:11:05 by tboumadj@student  #+#    #+#              #
#    Updated: 2023/06/15 15:00:15 by tboumadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FLAG

NAME		=		RPN
CC			=		c++
FLAGS		=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -f
CHECK		=		-fsanitize=address

#PATH

SRCS		=		src/main.cpp src/RPN.cpp
OBJS		=		$(SRCS:.cpp=.o)
HEADER	=		inc/RPN.hpp

#COLORS

_GREY		=		$'\x1b[33m
_GREEN	=		$'\x1b[32m

##

.o : .c $(HEADER) Makefile
								@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME):	$(OBJS)
									@echo "$(_GREY)Compilation de RPN en cours...$(_END)"
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
