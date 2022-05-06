# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchapon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 11:27:21 by cchapon           #+#    #+#              #
#    Updated: 2022/03/27 15:51:24 by cchapon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c check_arg.c ft_putchar.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f 

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		 
rush-02 :	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS}
			
all :		${NAME}

clean : 
			${RM} ${OBJS}
		
fclean :	clean 
		    ${RM} ${NAME}
			
re :		fclean all

.PHONY:		all clean fclean re
