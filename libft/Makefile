# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/14 15:08:09 by jopereir         ###   ########.fr        #
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
			 ft_strrchr.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_calloc.c \
			 ft_bzero.c \
			 ft_atoi.c \
			 ft_tolower.c \
			 ft_toupper.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putendl_fd.c \
			 ft_putnbr_fd.c \
			 ft_striteri.c \
			 ft_substr.c \
			 ft_strtrim.c \
			 ft_strmapi.c \
			 ft_strjoin.c \
			 ft_split.c \
			 ft_itoa.c
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
