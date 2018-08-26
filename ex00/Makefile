# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 10:56:52 by dabeloos          #+#    #+#              #
#    Updated: 2018/08/26 14:51:53 by dabeloos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= colle-2

C_FILES		= main.c colle_2.c string_utils.c rush00.c rush01.c rush02.c \
				rush03.c rush04.c

FLAGS		= -Wall -Wextra -Werror

$(NAME):
			gcc -o $(NAME) $(FLAGS) $(C_FILES)

all:		$(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			fclean all
