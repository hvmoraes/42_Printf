# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:36:38 by hcorrea-          #+#    #+#              #
#    Updated: 2022/11/02 14:03:01 by hcorrea-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC			= 	ft_strlen.c		\
				ft_putstr.c		\
				ft_itoa_base.c	\

CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -I. -c

RM			= /bin/rm -f


all: 		$(NAME)

$(NAME):	$(SRC:.c=.o)
			ar -rcs $(NAME) $(SRC:.c=.o)

.c.o:
			$(CC) $(CFLAGS) $< -o $(<:.c=.o)

clean:
			$(RM) $(SRC:.c=.o)
	
fclean: 	clean
			$(RM) all $(NAME)
		
re:			fclean all
