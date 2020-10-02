NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -I. -c
FILES	=ft_memset.c \
	 ft_bzero.c

OBJ	=$(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f libc-funcs/*.c
	cp -f addtional-funcs/*.c
	cp -f bonus-funcs/*.c
	cp -f personal-funcs/*.c

$(NAME): $(OBJ)
	ar rec $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re


