# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 15:44:20 by aguerrer          #+#    #+#              #
#    Updated: 2021/08/06 15:45:15 by aguerrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo
SRCS	= philo.c activity.c monitor.c utils.c
OBJS	= $(SRCS:.c=.o)
HEADER	= philo.h
CC		= gcc
FLAGS	= -g3 -Wall -Werror -Wextra -pthread
RM		= rm -rf
DEPS	= $(OBJS:.o=.d)

all:	$(HEADER) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

-include $(DEPS)
%.o: %.c
			$(CC) -c $(FLAGS) -o $@ $<

clean:
			@$(RM) $(OBJS)
			@$(RM) $(OBJS_B)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
