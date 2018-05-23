# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjacob <qjacob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:54:05 by qjacob            #+#    #+#              #
#    Updated: 2018/05/23 16:07:43 by qjacob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftasm.a

FLAGS = -f macho64

SRCS = 	ft_bzero.s \
		ft_cat.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_isprint.s \
		ft_memcpy.s \
		ft_memset.s \
		ft_puts.s \
		ft_strcat.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_tolower.s \
		ft_toupper.s \

OBJ = $(SRCS:.s=.o)

all: $(NAME)

$(NAME):
	@nasm $(FLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re
