# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnitu <lnitu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 10:13:31 by lnitu             #+#    #+#              #
#    Updated: 2023/02/18 11:33:31 by lnitu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_printf.c ft_puuts.c ft_puutuxpnbr.c  

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all