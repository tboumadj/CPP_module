# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 17:24:38 by tboumadj          #+#    #+#              #
#    Updated: 2023/02/24 19:05:22 by tboumadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FLAG
NAME 			=	Zombie
CC				=	g++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -f
CHECK			=	-fsanitize=address

#PATH

SRCS	=	main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJS	=	$(SRCS:.cpp=.o)

#COLORS
_GREY    =   $'\x1b[30m
_GREEN  =   $'\x1b[32m

##
.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME): $(OBJS)
		@echo "$(_GREY)Compilation de Zombie en cours...$(_END)"
		$(CC) $(OBJS) $(FLAGS) -o $(NAME)
		@echo "$(_GREEN)$(_BOLD)Fin de la compilation!$(_END)"

.SILENT : $(OBJS) $(NAME)

all     :   $(NAME)

clean   :
			@$(RM) $(OBJS)

fclean  :	clean
			@$(RM) $(NAME)
			@echo "$(_GREEN)$(_BOLD)Exec & .o have been erased!$(_END)"

re      :   fclean all

.PHONY  :   all clean fclean re