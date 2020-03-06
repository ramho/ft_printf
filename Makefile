# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhoorntj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/06 10:43:04 by rhoorntj          #+#    #+#              #
#    Updated: 2020/03/06 10:50:11 by rhoorntj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRC = printf.c sort_flag.c convert.c

INC = ft_printf.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make re -C libft/
	@echo "libft done"
	@gcc $(SRC) -I $(INC) -o $(NAME) libft/libft.a
	@echo "ft_printf done"

clean:
	@/bin/rm -f *.o
	@/bin/rm -f libft/*.o
	@echo "clean done"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f libft/libft.a
	@echo "fclean done"

re: fclean all

.PHONY : all clean fclean re 
