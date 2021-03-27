# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 12:43:45 by murachid          #+#    #+#              #
#    Updated: 2021/03/09 12:43:47 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

MAIN = main.c

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s

OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_strdup.o ft_write.o ft_read.o

all:$(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	gcc -Wall -Wextra -Werror  $(OBJ) $(MAIN)
$(OBJ):
	nasm -f macho64 ft_strlen.s
	nasm -f macho64 ft_strcpy.s
	nasm -f macho64 ft_strcmp.s
	nasm -f macho64 ft_strdup.s
	nasm -f macho64 ft_read.s
	nasm -f macho64 ft_write.s
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all