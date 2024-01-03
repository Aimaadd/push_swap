# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abentaye <abentaye@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 14:22:00 by abentaye          #+#    #+#              #
#    Updated: 2024/01/03 14:22:07 by abentaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = $(wildcard src/*.c utils/*.c)
OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS} | libft
	${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o $@

libft:
	@${MAKE} -C ./libft

clean:
	@${MAKE} -C ./libft clean
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re libft
