# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 14:16:24 by cserrano          #+#    #+#              #
#    Updated: 2023/03/28 16:28:29 by cserrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_tolower.c\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_toupper.c ft_strchr.c ft_strrchr.c\
		ft_strlcat.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_strjoin.c\
		ft_substr.c ft_split.c ft_itoa.c ft_strmapi.c ft_putnbr_fd.c\
		ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_striteri.c\

OBJT = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
			gcc -c $(CFLAGS) $(SRC)
			ar rcs $(NAME) $(OBJT)

clean: 
		rm -f $(OBJT) 

fclean:  clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re