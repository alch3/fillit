/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:49:28 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/08 18:30:03 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "libft.h"
#define BUFSIZE 21;

void			ft_insertion(tetriminos_list **begin_list, char *new_tetrimino, unsigned int new_id)
{
	tetriminos_list *new_t;
	new_t = malloc(sizeof(*new_t));
	if (liste == NULL || new_t == NULL)
		return ;
	new_t->tetriminos = ft_strdup(new_tetrimino);
	new_t->id = ft_check_id(new_id);
	new_t->next = *begin_list;
	begin_list = &new_t;
}

void			ft_push_back(tetriminos_list **begin_list, char *new_tetrimino, unsigned int new_id)
{
	tetriminos_list *tmp;
	tetriminos_list *elem;

	tmp = *begin_list;
	while(tmp->next)
		tmp = tmp->next;
	elem = malloc(sizeof(*elem));
	tmp->next = &elem;
	elem->tetriminos = ft_strdup(new_tetrimino);
	elem->id = ft_comp(elem->tetrimino);
	elem->next = NULL;
}

tetriminos_list ft_map_to_list()
{
	int				fd;
	unsigned int 	i;
	char			buf[BUFSIZE + 1];
	tetriminos_list	*begin;

	i = 0;
	tmp = begin;
	fd = open("valid_tetriminos.txt", O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (ret = read(fd, buf, BUFSIZE))
	{
		i++;
		buf[ret] = \0;
		ft_insertion(*begin, buf, i)
	}


	return (begin);
}
