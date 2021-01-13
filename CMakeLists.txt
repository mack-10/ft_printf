cmake_minimum_required(VERSION 3.16)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf.h
        libft/libft.h
        main.c ft_printf.c
        libft/ft_strlen.c libft/ft_strdup.c libft/ft_itoa.c libft/ft_strchr.c
        type_d.c type_d_positive.c type_d_zero.c)