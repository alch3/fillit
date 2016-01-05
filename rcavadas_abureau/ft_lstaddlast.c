/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 21:47:06 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/05 17:25:52 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstaddlast(t_list **element, int i, int j, const char *str)
{
	t_list	*tmp;
	t_list	*newelement;

	newelement = (t_list*)malloc(sizeof(t_list));
	tmp = *element;
	newelement->index = i;
	newelement->type = j;
	newelement->tetrimino = ft_strdup(str);
	newelement->next = NULL;
	if (tmp == NULL)
	{
		*element = newelement;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newelement;
}
