SRCS    = main.c ft_instructions.c ft_check.c ft_sorta.c
NAME    = p
OBJS 	= ${SRCS:.c=.o}
AR		= libft/libft.a
CC		= cc
GFLAGS  = -Wall -Wextra -Werror
MAKEC	= make clean
MAKEF	= make fclean
MAKER	= make re

all: $(NAME)

$(NAME):
	@$(MAKE) -C libft
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(CC) -o ${NAME} ${AR} ${OBJS}

clean:
	@$(MAKEC) -C libft
	@${RM} ${OBJS}

fclean: clean
	@$(MAKEF) -C libft
	@${RM} ${NAME}

re: fclean all
	@$(MAKER) -C libft

.PHONY: all clean fclean re