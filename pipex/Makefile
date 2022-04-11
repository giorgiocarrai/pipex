NAME_PIPEX	=	pipex
				
# NAME_BONUS	= checker

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror

PIPEX_SRCS = pipex.c \
			utils.c \

# BONUS_SRCS =

PIPEX_OBJS	= ${PIPEX_SRCS:.c=.o}

#BONUS_OBJS	= ${BONUS_SRCS:.c=.o}

%.o: %.c
			$(CC) ${CFLAGS} -c $< -o $@

all:		pipex

pipex:  ${PIPEX_OBJS}
			$(CC) ${CFLAGS} -o ${NAME_PIPEX} ${PIPEX_OBJS}

clean:
			rm -f *.o
			rm -f ./*/*.o

fclean: 	clean
			rm -f $(NAME_PIPEX)

re: fclean all

.PHONY: all clean fclean re pipex