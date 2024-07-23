# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 09:28:15 by atabcheh          #+#    #+#              #
#    Updated: 2024/03/06 09:28:17 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS	= main.c tools.c

OBJS	= ${SCRS:.c=.o}

NAME	= ft_cat

.c.o:
		${CC} -c $< -o ${<:.c=.o}

CC		= gcc -Wall -Wextra -Werror

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
