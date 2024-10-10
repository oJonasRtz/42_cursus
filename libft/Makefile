# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/10 10:22:01 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Files
SRCS_FILES  = ft_isalnum.c \
             ft_isprint.c \
             ft_isalpha.c \
             ft_isascii.c \
             ft_isdigit.c \
             ft_memset.c \
			 ft_strlen.c \
			 ft_strchr.c \
			 ft_strdup.c \
			 ft_strlcat.c \
			 ft_strlcpy.c \
			 ft_strncmp.c \
			 ft_strnstr.c \
			 ft_strrchr.c
OBJS_FILES  = $(SRCS_FILES:.c=.o)

#compile -I. find for the header (.h) in current directory
CC 		= cc
CFLAGS 	= -Wall -Werror -Wextra -I.

#Rules
all: $(NAME)

%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS_FILES)
	@echo "Creatind lib $(NAME)"
	ar rc $(NAME) $(OBJS_FILES) 

clean:
	rm -f $(OBJS_FILES)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
