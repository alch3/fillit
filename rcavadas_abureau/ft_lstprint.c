/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:56:15 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/05 17:22:56 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstprint(t_list *element)
{
	t_list	*tmp;

	tmp = element;
	if (element)
	{
		while (tmp)
		{
			ft_putnbr(tmp->index);
			ft_putchar('\n');
			ft_putnbr(tmp->type);
			ft_putchar('\n');
			ft_putstr(tmp->tetrimino);
			ft_putchar('\n');
			tmp = tmp->next;
		}
	}
}
