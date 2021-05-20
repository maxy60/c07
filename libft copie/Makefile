SRCS		= ft_bzero.c ft_memset.c ft_memcpy.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

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
