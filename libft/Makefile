# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/05 09:55:34 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Files
SRCS_FILES = 
OBJS_FILES = $(SRCS_FILES: .c=.o)
#compile
CC 		= gcc
CFLAGS 	= -Wall - Werror - Wextra

all: $(NAME)

clean:
	rm -f $(OBJS_FILES)

fclean:
	rm -f $(NAME)

re:	all clean fclean

.PHONY: all clean fclean re
