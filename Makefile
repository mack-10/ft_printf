CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror
NAME        =   libftprintf.a
SRCS        =  	ft_printf.c			\
				ft_printf_utils.c	\
				ex_base.c			\
				type.c				\
				print_nbr.c			\
				print_sign.c		\
				print_c.c			\
				print_s.c
OBJS		=	$(SRCS:.c=.o)
AR			=	ar rcs
LIB			=	libft
LIB_NAME	=	libft.a

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	make all -C $(LIB)
	cp $(LIB)/$(LIB_NAME) $(NAME)
	$(AR) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	make clean -C $(LIB)

fclean : clean
	rm -f $(NAME)
	make fclean -C $(LIB)

re : fclean all
