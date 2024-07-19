SRC	=	src/ft_putchar.c\
		src/ft_putstr.c\
		src/ft_putnbr.c\
		src/ft_putnbrb.c\
		src/ft_uputnbr.c\
		src/ft_printf.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	libftprintf.a

CFLAGS	+=	-Wall -Wextra -Werror

RM	=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
