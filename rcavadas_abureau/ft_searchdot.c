/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchdot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 16:09:50 by abureau           #+#    #+#             */
/*   Updated: 2016/01/27 18:15:24 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"
static char	**backintime(char **sqr, int size, int letter)
{
	int	nl;
	int	i;
	int	j;

	nl = 4;
	i = 0;
	j = 0;
	ft_putstr("Removing letter : ");ft_putchar(letter);ft_putchar('\n');
	while(nl > 0)
	{
		if (sqr[i][j] == letter)
		{
			sqr[i][j] = '.';
			nl--;
		}
		j++;
		if(j == size)
		{
			i++;
			j = 0;
		}
	}
	return (sqr);
}

char	**ft_searchdot(char **sqr, int *coord, int *size, int i)
{
	sqr = backintime(sqr, *size, i);
	return (sqr);
}
