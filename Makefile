# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: singulab <singulab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 21:52:02 by gdelarme          #+#    #+#              #
#    Updated: 2022/01/04 19:19:11 by singulab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT = libft

HEADER = ft_printf.h -L./libft -lft

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

.o.c:
	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re