# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 18:50:13 by jbrionne          #+#    #+#              #
#    Updated: 2020/10/25 11:57:58 by jbrionne         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = SRCS/checkargument.c SRCS/function00.c SRCS/main.c SRCS/print0to999.c

OBJS = ${SRCS:.c=.o}

NAME = rush-02

HEADER = SRCS/proto.h

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${CFLAGS} ${OBJS} 

all :		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all


.PHONY: all clean fclean re
