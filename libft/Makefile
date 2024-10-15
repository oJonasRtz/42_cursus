# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/15 10:32:53 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Files
SRCS_FILES  = $(wildcard *.c)
OBJS_FILES  = $(SRCS_FILES:.c=.o)

#compile -I. find for the header (.h) in current directory. -g to use valgrind
CC 		= cc
CFLAGS 	= -Wall -Werror -Wextra -I. -g

#Rules
all: $(NAME)

#The flag -c is for compile to .o without linking. -o is for the file names
%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

#flag r is for replace, c if for create
$(NAME): $(OBJS_FILES)
	@echo "Creatind lib $(NAME)"
	ar rc $(NAME) $(OBJS_FILES) 

clean:
	rm -f $(OBJS_FILES)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
