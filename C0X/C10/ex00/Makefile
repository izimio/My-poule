# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/21 14:26:33 by jbrionne          #+#    #+#              #
#    Updated: 2020/10/21 14:39:08 by jbrionne         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = display_file.c

OBJS = ${SRCS:.c=.o}

NAME = ft_display_file

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS} 

all :		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re

