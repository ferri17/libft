# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 23:08:40 by fbosch            #+#    #+#              #
#    Updated: 2023/05/06 19:58:21 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c


OBJ = $(SRC:%.c=%.o)

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rc

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) libft.h
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(wildcard $(OBJ)) *.out

fclean: clean
	$(RM) $(NAME)

re: fclean all