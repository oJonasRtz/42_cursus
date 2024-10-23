# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 09:51:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/23 13:52:50 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#Directories
SRCS_DIR = src/
BONUS_DIR = bonus/

#Files
SRCS_FILES  = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_strlcpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c
OBJS_FILES  = $(SRCS_FILES:.c=.o)
BONUS_FILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS = $(BONUS_FILES:.c=.o)

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
	ar rcs $(NAME) $(OBJS_FILES)

clean:
	rm -f $(OBJS_FILES) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

bonus: $(BONUS_OBJS)
	@echo "Add bonus obj $<"
	ar rcs $(NAME) $(BONUS_OBJS) 

.PHONY: all clean fclean re bonus
