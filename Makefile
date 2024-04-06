# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/06 22:50:55 by sbadakh           #+#    #+#              #
#    Updated: 2024/04/06 23:07:06 by sbadakh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	pipex

SRCS	=./src/pipex.c \
		./src/utils.c \

HEADER			= ./src/pipex.h

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

LIBS			= -L./libft -lft


OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
					@make all -C ./libft
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBS)




clean:
				@$(RM) $(OBJS)
			
					@make fclean -C ./libft

fclean:			clean
					@$(RM) $(NAME) $(OBJS)

re:				fclean all

.PHONY:			all clean fclean re
