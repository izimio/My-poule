# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 18:50:13 by jbrionne          #+#    #+#              #
#    Updated: 2020/10/21 10:34:31 by jbrionne         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = doop.c doopfunctions.c

OBJS = ${SRCS:.c=.o}

NAME = do-op

HEADER = proto.h

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
