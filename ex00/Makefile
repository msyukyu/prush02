# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 10:56:52 by dabeloos          #+#    #+#              #
#    Updated: 2018/08/26 11:02:56 by dabeloos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= colle-2

C_FILES		= main.c colle_2.c string_utils.c rush00.c rush01.c rush02.c \
				rush03.c rush04.c

O_FILES		= main.o colle_2.o string_utils.o rush00.o rush01.o rush02.o \
				rush03.o rush04.o

$(NAME):
			gcc -o $(NAME) -Wall -Wextra -Werror $(C_FILES)

all:		$(NAME)

clean:
			rm -f $(O_FILES)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
