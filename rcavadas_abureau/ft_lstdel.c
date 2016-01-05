/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:18:50 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/05 16:23:43 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstdel(t_list **element)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *element;
	tmp2 = tmp1->next;
	if (element)
	{
		while (tmp2->next)
		{
			free(tmp1->tetrimino);
			free(tmp1);
			tmp1 = tmp2;
			tmp2 = tmp1->next;
		}
		free(tmp1->tetrimino);
		free(tmp1);
	}
	*element = NULL;
}
