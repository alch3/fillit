/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:56:15 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 19:46:34 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstprint(t_lstptr element)
{
	t_lstptr	tmp;

	tmp = element;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->index);
		ft_putchar(' ');
		ft_putstr(tmp->tetrimino);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}
