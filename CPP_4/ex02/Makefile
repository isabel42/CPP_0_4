SRCS	= main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp\
				WrongCat.cpp \
				Brain.cpp

OBJS 	= ${SRCS:.cpp=.o}

NAME 	= a.out

CC		= g++

RM		= rm -f

CFLAGS	= -Wextra -Wall -Werror -std=c++98

.cpp.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: 	${OBJS}
			${CC} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re