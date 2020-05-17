# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhoorntj <rhoorntj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/06 10:43:04 by rhoorntj          #+#    #+#              #
#    Updated: 2020/03/10 17:17:58 by rhoorntj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

SRC = convert_csp.c convert_di.c convert_oux.c convert_f.c convert_modulo.c \
			width_n_final_flag.c precision_flag.c ft_printf.c parse_flags.c parse_flags_bis.c \
			start_conversion.c length_modifiers_flag.c

INC = ft_printf.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@gcc -c $(FLAGS) $(SRC)
	@ar -rc $(NAME) *.o

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
