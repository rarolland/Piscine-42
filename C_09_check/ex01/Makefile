# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarollan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 15:34:12 by rarollan          #+#    #+#              #
#    Updated: 2022/03/31 15:35:21 by rarollan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/\
ft_strcmp.o

HEADER  = includes/

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
                ar -crs ${NAME} $^

${OBJS} :       %.o: %.c
		${CC} - I${HEADER} ${FLAGS} -c $< -o $@

clean:
      	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fcclean re

