# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:45:22 by vviterbo          #+#    #+#              #
#    Updated: 2025/02/21 13:07:00 by vviterbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

SRCS =	tests.c test_ft_count_strocc.c test_ft_lst_isin_void.c \
		test_ft_min.c test_ft_strjoin_ip.c test_ft_array_append.c \
		test_ft_free_array.c test_ft_lstcut.c test_ft_readfile.c test_ft_abs.c \
		test_ft_arrlen.c test_ft_get_next_line.c test_ft_lstmax.c \
		test_ft_str_replace.c test_ft_atof.c test_ft_isint.c test_ft_lstmin.c \
		test_ft_strarray_mapi.c test_ft_coalesce_char.c test_ft_lst_getn.c \
		test_ft_max.c test_ft_strjoin_gnl.c test_ft_strcmp.c test_ft_tree.c \
		test_ft_range.c test_ft_lstpop.c

HEADER = tests.h

CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ../

LIBFT_SRCS = $(patsubst %.c, ../%.c, $(shell make -C ../ -s print_srcs))

LIBFT = $(LIBFT_DIR)libft.a

CC = cc

all: $(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f objs/*.o

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

$(LIBFT): $(LIBFT_SRCS)
	$(MAKE) -C $(LIBFT_DIR) all

$(NAME): $(SRCS) $(LIBFT)
	$(CC) $(CFLAGS) $(SRCS) -L$(LIBFT_DIR) -lft -o $(NAME)

.PHONY: all clean fclean re
