/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchdot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:25:00 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:25:02 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

void		searchdot(char **sqr, int *coord, int *size, int i)
{
	backintime(sqr, *size, (char)i + 'A');
}
