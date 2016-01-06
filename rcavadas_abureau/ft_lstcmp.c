/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 16:42:08 by abureau           #+#    #+#             */
/*   Updated: 2016/01/06 16:42:13 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	ft_lstcmp(t_list **begin, const char *str)
{
	t_list	*tmp;

	tmp = *begin;
	while (tmp->next)
	{
		if (ft_strcmp(tmp->tetrimino, str) == 0)
			return (tmp->type);
		tmp = tmp->next;
	}
	ft_error(begin, NULL);
	return (0);
}
