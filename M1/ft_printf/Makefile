# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 11:11:14 by jopereir          #+#    #+#              #
#    Updated: 2024/10/24 14:28:44 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
HEADER = include
LIBFT = libft

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(HEADER) -g

all: $(NAME)

%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@
	
#Creates libft.a. Copy to the current directory. Add libft.a to libprintf.a
$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME) 
	@echo "Creating $(NAME)."
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
