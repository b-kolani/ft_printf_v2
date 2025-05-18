NAME = ft_printf 

CC = cc 
CFLAGS = -Wall -Wextra -Werror 

HEADER = ft_printf.h 
SRCS = ft_printf.c ft_putchar.c ft_putstr.c \
		ft_putnbr.c ft_putunsig.c ft_putptr.c \
		ft_puthex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re