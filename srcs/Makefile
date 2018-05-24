# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjacob <qjacob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 16:54:05 by qjacob            #+#    #+#              #
#    Updated: 2018/05/24 16:02:35 by qjacob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

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

TESTS = main_test/main_bzero.c \
		main_test/main_cat.c \
		main_test/main_isalnum.c \
		main_test/main_isalpha.c \
		main_test/main_isascii.c \
		main_test/main_isdigit.c \
		main_test/main_isprint.c \
		main_test/main_memcpy.c \
		main_test/main_memset.c \
		main_test/main_strcat.c \
		main_test/main_strdup.c \
		main_test/main_strlen.c \
		main_test/main_tolower.c \
		main_test/main_toupper.c \

OBJ = $(SRCS:.s=.o)

%.o:%.s
	@echo " - Creating $<..."
	@nasm -f macho64 $< -o $@ 

OBJC = $(TESTS:.c=.o)

%.o:%.c
	@echo " - Creating $<..."
	@gcc -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

test: $(NAME) $(OBJC)
	@echo "Creating test..."
	@gcc main_test/main_bzero.o $(NAME) -o ft_bzero
	@gcc main_test/main_cat.o $(NAME) -o ft_cat
	@gcc main_test/main_isalnum.o $(NAME) -o ft_isalnum
	@gcc main_test/main_isalpha.o $(NAME) -o ft_isalpha
	@gcc main_test/main_isascii.o $(NAME) -o ft_isascii
	@gcc main_test/main_isdigit.o $(NAME) -o ft_isdigit
	@gcc main_test/main_isprint.o $(NAME) -o ft_isprint
	@gcc main_test/main_memcpy.o $(NAME) -o ft_memcpy
	@gcc main_test/main_memset.o $(NAME) -o ft_memset
	@gcc main_test/main_strcat.o $(NAME) -o ft_strcat
	@gcc main_test/main_strdup.o $(NAME) -o ft_strdup
	@gcc main_test/main_strlen.o $(NAME) -o ft_strlen
	@gcc main_test/main_tolower.o $(NAME) -o ft_tolower
	@gcc main_test/main_toupper.o $(NAME) -o ft_toupper
	@echo "Creation done !"

exe: test
	@echo "Starting test...\n"
	@echo "ft_bzero: \n"
	@./ft_bzero
	@echo "\nft_cat: \n"
	@./ft_cat
	@echo "\nft_isalnum: \n"
	@./ft_isalnum
	@echo "\nft_isalpha: \n"
	@./ft_isalpha
	@echo "\nft_isascii: \n"
	@./ft_isascii
	@echo "\nft_isdigit: \n"
	@./ft_isdigit
	@echo "\nft_isprint: \n"
	@./ft_isprint
	@echo "\nft_memcpy: \n"
	@./ft_memcpy
	@echo "\nft_memset: \n"
	@./ft_memset
	@echo "\nft_strcat: \n"
	@./ft_strcat
	@echo "\nft_strdup: \n"
	@./ft_strdup
	@echo "\nft_strlen: \n"
	@./ft_strlen
	@echo "\nft_tolower: \n"
	@./ft_tolower
	@echo "\nft_toupper: \n"
	@./ft_toupper
	@echo "End."

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJC)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean all re
