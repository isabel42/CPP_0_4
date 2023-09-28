SRCS	= main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

OBJS 	= ${SRCS:.cpp=.o}

NAME 	= unnecessary_violence

CC		= g++

RM		= rm -f

CFLAGS	= -Wextra -Wall -Werror -std=c++98

.cpp.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: 	${OBJS}
			${CC} ${OBJS} -o ${NAME} 

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re