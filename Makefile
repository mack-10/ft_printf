CC          =   gcc
FLAGS       =   -Wall -Wextra -Werror
NAME        =   libftprintf.a
SRCS        =  	ft_printf.c			\
				ft_printf_utils.c	\
				ex_base.c			\
				type.c				\
				print_plus.c		\
				print_sign.c		\
				print_c.c
OBJS		=	$(SRCS:.c=.o)
AR			=	ar rcs
LIB			=	libft
LIB_NAME	=	libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	make all -C $(LIB)
	cp $(LIB)/$(LIB_NAME) $(NAME)
	$(AR) $@ $^

clean : $(OBJS)
	rm -f $^
	make clean -C $(LIB)

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIB)

re : fclean all
