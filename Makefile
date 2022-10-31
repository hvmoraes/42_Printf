# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 11:07:37 by hcorrea-          #+#    #+#              #
#    Updated: 2022/10/18 11:12:34 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror

NAME 	= libprintf.a

SRC 	= 

OBJS 	= $(SRC:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all: 		$(NAME)

clean: 		rm -rf $(NAME)

fclean: 	rm -f $(NAME)

re: 		fclean all