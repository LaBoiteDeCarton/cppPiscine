NAME = Animal
SRCS = main.cpp Animal.class.cpp Dog.class.cpp Cat.class.cpp  WrongAnimal.class.cpp WrongCat.class.cpp
OBJS = ${SRCS:.cpp=.o}
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all, clean, fclean