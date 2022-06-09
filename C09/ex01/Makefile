
SRC	:= srcs

INCLUDES	= ./includes/

SOURCES	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	= $(patsubst $(SRC)/%.c, $(SRC)/%.o, $(SOURCES))

NAME		= libft.a

GCC	= gcc -Wall -Wextra -Werror -c

CLEAN = rm -f ${OBJS}

FCLEAN = rm -f ${NAME}

all :	${NAME}

${NAME} : ${OBJS}
		ar rcs libft.a ${OBJS}
	
$(SRC)/%.o: $(SRC)/%.c
	${GCC} -I ${INCLUDES} $< -o ${<:.c=.o} 

clean : 
		${CLEAN}

fclean : clean 
		${FCLEAN}

re :	fclean all
