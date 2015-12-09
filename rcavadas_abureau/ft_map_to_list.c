/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:49:28 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/09 18:33:47 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "libft.h"
#define BUFSIZE 21;

void			ft_push_forward(tetri_list **beginning, char *new_tetrimino, unsigned int new_id)
{
	tetri_list *new;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return ;
	new->tetrimino = ft_strdup(new_tetrimino);
	new->id = ft_check_id(new_id);
	new->next = *beginning;
	beginning = &new_t;
}

void			ft_push_back(tetri_list **beginning, char *new_tetrimino, unsigned int new_id)
{
	tetri_list *tmp;
	tetri_list *elem;

	tmp = *beginning;
	while(tmp->next)
		tmp = tmp->next;
	elem = malloc(sizeof(*elem));
	tmp->next = &elem;
	elem->tetrimino = ft_strdup(new_tetrimino);
	elem->id = ft_comp(elem->tetrimino);
	elem->next = NULL;
}

tetri_list		ft_map_to_list()
{
	int				fd;
	unsigned int 	i;
	char			buf[BUFSIZE + 1];
	tetri_list		*beginning;

	i = 0;
	tmp = beginning;
	fd = open("valid_tetriminos.txt", O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (ret = read(fd, buf, BUFSIZE))
	{
		i++;
		buf[ret] = \0;
		ft_push_back(*beginning, buf, i)
	}
	return (beginning);
}
