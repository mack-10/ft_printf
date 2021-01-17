CC          =   gcc
FLAGS       =   -Wall -Wextra -Werror
NAME        =   libftprintf.a
SRCS        =  	ft_printf.c			\
				ft_printf_utils.c	\
				type_di.c			\
				type_u.c			\
				type_x.c			\
				print_plus.c		\
				print_zero.c		\
				print_minus.c
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
