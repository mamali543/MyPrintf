NAME=libftprintf.a

SRCS=ft_check_flags.c ft_gtreat.c ft_hex.c ft_itoa.c ft_lastc.c ft_mpgtlon.c ft_mpltlon.c ft_printf.c ft_printlen.c ft_tmjw1.c ft_tmjw2.c ft_tools.c ft_treat_alld.c ft_treat_allp.c ft_treat_allu.c ft_treat_allx.c ft_treat_jwd.c ft_treat_jwu.c ft_treat_percentage.c ft_treat_s.c


OBJS=ft_check_flags.o ft_gtreat.o ft_hex.o ft_itoa.o ft_lastc.o ft_mpgtlon.o ft_mpltlon.o ft_printf.o ft_printlen.o ft_tmjw1.o ft_tmjw2.o ft_tools.o ft_treat_alld.o ft_treat_allp.o ft_treat_allu.o ft_treat_allx.o ft_treat_jwd.o ft_treat_jwu.o ft_treat_percentage.o ft_treat_s.o

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS)
		ar -rc $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
