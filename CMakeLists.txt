cmake_minimum_required(VERSION 3.16)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf.h
        libft/libft.h
        main.c ft_printf.c ft_printf_utils.c
        libft/ft_strlen.c libft/ft_bzero.c libft/ft_strdup.c libft/ft_itoa.c libft/ft_strchr.c
        libft/ft_atoi.c libft/ft_strlcpy.c libft/ft_calloc.c libft/ft_toupper.c libft/ft_strjoin.c
        type.c ex_base.c print_str.c print_c.c print_sign.c
        )