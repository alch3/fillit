/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchdot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:09:50 by abureau           #+#    #+#             */
/*   Updated: 2016/02/08 15:29:32 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static void	backintime(char **sqr, int size, char letter)
{
	int		nl;
	int		i;
	int		j;

	nl = 4;
	i = 0;
	j = 0;
	while (nl > 0)
	{
		if (sqr[i][j] == letter)
		{
			sqr[i][j] = '.';
			nl--;
		}
		j++;
		if (j == size)
		{
			i++;
			j = 0;
		}
	}
}

void		ft_searchdot(char **sqr, int *coord, int *size, int i)
{
	backintime(sqr, *size, (char)i + 'A');
}
