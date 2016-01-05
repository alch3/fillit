/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:56:15 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/05 12:59:20 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstprint(t_lstptr element)
{
	t_lstptr	tmp;

	tmp = element;
	if (element)
	{
		while (tmp)
		{
			ft_putnbr(tmp->index);
			ft_putchar('\n');
			ft_putstr(tmp->tetrimino);
			ft_putchar('\n');
			tmp = tmp->next;
		}
	}
}
