SRCS	= megaphone.cpp

OBJS 	= ${SRCS:.cpp=.o}

NAME 	= megaphone

CC		= g++

RM		= rm -f

CFLAGS	= -Wextra -Wall -Werror -std=c++98

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJS}
			${CC} ${OBJS} -o ${NAME} 

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re