# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 23:08:40 by fbosch            #+#    #+#              #
#    Updated: 2023/05/11 15:05:57 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c

OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(BONUS:%.c=%.o)

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rc

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ) libft.h
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS) libft.h
	$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) *.out

fclean: clean
	$(RM) $(NAME)

re: fclean all