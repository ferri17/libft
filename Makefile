# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 23:08:40 by fbosch            #+#    #+#              #
#    Updated: 2023/05/03 23:43:15 by fbosch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_sheet

SRC = *.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(NAME).c
	cc $(FLAGS) $(SRC) -o $(NAME)

norm:
	norminette -R CheckForbiddenSourceHeader

clean:
	/bin/rm -f *.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)
