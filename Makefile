# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:07:37 by hcorrea-          #+#    #+#              #
#    Updated: 2022/11/02 16:26:22 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror

NAME 	= libftprintf.a

SUBDIR 	= src

SRC 	= $(foreach dir, $(SUBDIR), $(wildcard $(dir)/*.c))

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