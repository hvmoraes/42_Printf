# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42lisboa.pt>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:07:37 by hcorrea-          #+#    #+#              #
#    Updated: 2022/11/04 15:30:08 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror

NAME 	= libftprintf.a

SRC 	= 	libft/ft_itoa_base.c			\
			libft/ft_putstr.c				\
			libft/ft_strlen.c				\
			libft/ft_tolower.c				\
			libft/ft_toupper.c				\
			ft_putescape.c 					\
			ft_printf.c						\
			put_var.c						\
			ft_putchar.c					\
			ft_putnbr.c						\
			ft_putnnbr.c					\
			ft_hexnumbers.c					\
			ft_putaddr.c					\

OBJS 	= $(SRC:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all: 		$(NAME)

clean: 		
			rm -rf $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

make:
			cd libft && make