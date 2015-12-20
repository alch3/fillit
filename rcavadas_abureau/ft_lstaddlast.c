/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 21:47:06 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/20 17:06:21 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

t_lstptr	ft_lstaddlast(t_lstptr element, int i, const char *str)
{
	t_lstptr	newelement;
	t_lstptr	tmp;

	newelement = (t_lstptr)malloc(sizeof(t_list));
	tmp = element;
	newelement->index = i;
	newelement->tetrimino = ft_strdup(str);
	newelement->next = NULL;
	if (tmp == NULL)
		return (newelement);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newelement;
	return (newelement);
}
