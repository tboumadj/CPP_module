# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 17:24:38 by tboumadj          #+#    #+#              #
#    Updated: 2022/12/31 18:25:33 by tboumadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FLAG
NAME 			=	PhoneBook
CC				=	g++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -f
CHECK			=	-fsanitize=address

#PATH

SRCS	=	PhoneBook.cpp

OBJS	=	$(SRCS:.cpp=.o)

#COLORS
_RED    =   $'\x1b[31m
_GREEN  =   $'\x1b[32m

##
.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME): $(OBJS)
		@echo "$(_RED)Compilation de megaphone en cours...$(_END)"
		$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)
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