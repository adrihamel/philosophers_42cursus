# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 15:44:20 by aguerrer          #+#    #+#              #
#    Updated: 2021/08/06 18:33:58 by aguerrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo

FLAGS	= -g3 -Wall -Werror -Wextra -pthread
CC		= gcc
RM		= rm -rf

INCLUDES = -I ./include/

SRCDIR = ./src/
SRCS	= philo.c activity.c monitor.c utils.c
SRCS_UTILS = ${addprefix ${SRCDIR}, ${SRCS}}

OBJS	= $(SRCS_UTILS:.c=.o)

RED 			= \033[0;31m

GREEN 			= \033[0;32m

NONE 			= \033[0m

all:	project $(NAME)

project:

	@echo "Checking project..."

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(INCLUDES) -o $@ $^


%.o: %.c
			$(CC) -c $(FLAGS) $(INCLUDES) -o $@ -c $<

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
