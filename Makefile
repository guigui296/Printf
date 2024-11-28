# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 15:50:19 by gbehra            #+#    #+#              #
#    Updated: 2024/11/28 17:29:37 by gbehra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_printf_%c.c ft_printf_%d.c ft_printf_%s.c \
ft_printf_%xX.c ft_printf_%p.c ft_printf_%u.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

FLAGS	= -Wall -Werror -Wextra

LIB		= ranlib

all:		${NAME}

.c.o:		@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					@ar rc ${NAME} ${OBJS}
					@${LIB} ${NAME}

clean:
					@rm -f ${OBJS}

fclean:		clean
					@rm -f ${NAME}

re:					fclean all

.PHONY:		all clean fclean re