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

SRC = printf.c sort_flag.c convert_csp.c convert_diouxX.c flags.c tab_ptr.c convert_diouxX.c  start_conversion.c di_flags.c\


INC = printf.h

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

# NAME = libftprintf.a
#
# FLAGS = -Wall -Wextra -Werror
#
# LIBFT = libft
#
# DIR_S = sources
#
# DIR_O = temporary
#
# HEADER = include
#
# SOURCES = printf.c sort_flag.c convert_csp.c convert_diouxX.c flags.c tab_ptr.c convert_diouxX.c \
#  		main.c
#
# SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
#
# OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))
#
# all: $(NAME)
#
# $(NAME): $(OBJS)
# 	@make -C $(LIBFT)
# 	@cp libft/libft.a ./$(NAME)
# 	@ar rc $(NAME) $(OBJS)
# 	@ranlib $(NAME)
#
# # $(DIR_O)/%.o: $(DIR_S)/%.c
# # 	@mkdir -p temporary
# # 	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<
#
# clean:
# 	@rm  -f *.o *.gch
# 	@make clean -C $(LIBFT)
#
# fclean: clean
# 	@rm -f $(NAME)
# 	@make fclean -C $(LIBFT)
#
# re: fclean all
