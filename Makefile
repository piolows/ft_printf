NAME	= libftprintf.a

SRCS	= ft_printf.c srcs/ft_putchar_pf.c srcs/ft_putstr_pf.c srcs/ft_puthex_pf.c srcs/ft_putint_pf.c srcs/ft_putuint_pf.c \
			srcs/ft_putmem_pf.c srcs/ft_strlen.c

OBJS	= $(SRCS:.c=.o)

FLAGS	= -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
