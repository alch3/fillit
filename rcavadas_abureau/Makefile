# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 17:14:54 by rcavadas          #+#    #+#              #
#    Updated: 2016/02/23 18:50:15 by rcavadas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = clang

SRCS = arrange.c \
	error.c \
	fileclose.c \
	filecomp.c \
	filegetfd.c \
	filetotab.c \
	ft_putchar.c \
	ft_putendl.c \
	ft_putstr.c \
	ft_strcmp.c \
	getid.c \
	main.c \
	onestepback.c \
	resolve.c \
	sqrinc.c \
	squareroot.c \
	taballoc.c \
	tabprint.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all
