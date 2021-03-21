SRCS		= main.c math.c search.c ft_str_is_numeric.c parse.c convert.c main.cprint_functions.c

OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

CC			= gcc

CCFLAGS 	= -Wall -Werror -Wextra

all:		${NAME}

${NAME}: 			
					${CC} -c ${CCFLAGS} ${SRCS}
					${CC} ${CCFLAGS} -o ${NAME} ${OBJS}
clean:
					rm -f ${OBJS}

fclean:		clean
					rm -f ${NAME}

re:			fclean all
		
.PHONY:		all clean fclean re
