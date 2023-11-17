CC=clang
CFLAGS=-Wall -Wextra -Werror
NAME=libftprintf.a
HEADER=ft_printf.h
SOURCES= ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c ft_printf.c ft_put_hexa_MAJ.c ft_put_hexa_min.c ft_pointer_hexa.c
OBJECTS=$(SOURCES:.c=.o) 

$(NAME): $(OBJECTS) 
	ar -rcs $(NAME) $(OBJECTS) 

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) $< -c -o $@

all: $(NAME)

re: fclean all

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJECTS) 

.PHONY: all fclean re
