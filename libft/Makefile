# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/07 13:57:46 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Files
SRCS_FILES  = $(wildcards *.c)
OBJS_FILES  = $(SRCS_FILES: .c=.o)
#compile
CC 		= gcc
CFLAGS 	= -Wall - Werror - Wextra
#Rules
all: $(NAME)

$(NAME): $(OBJS_FILES)
	ar rc $(NAME) $(SRCS_FILES) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_FILES)

fclean:
	rm -f $(NAME)

re:	all clean fclean

.PHONY: all clean fclean re
