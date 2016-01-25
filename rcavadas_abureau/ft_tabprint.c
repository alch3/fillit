/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 18:08:38 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/25 19:25:00 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_tabprint(char **sqr, int size)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while ((i <  size) && (j <= size))
	{
		ft_putchar(sqr[i][j]);
		j++;
		if((j == size) && (i < size))
		{
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
}
