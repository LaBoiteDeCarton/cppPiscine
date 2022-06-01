NAME = phonebook
SRCS = main.cpp phonebook.class.cpp contact.class.cpp
OBJS = ${SRCS:.cpp=.o}
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

.c.o:
	${CC} ${FLAGS} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

.PHONY: all, clean, fclean