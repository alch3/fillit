/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrinc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:27:16 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:27:17 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	freemap(char **sqr, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		free(sqr[j]);
		j++;
	}
	free(sqr);
}

char		**sqrinc(char **sqr, int *gridsize)
{
	char	**newsqr;
	int		index;
	int		i;
	int		j;

	i = 0;
	j = 0;
	*gridsize += 1;
	newsqr = taballoc(*gridsize, &index);
	while ((i < index - 1) && (j < index))
	{
		newsqr[i][j] = '.';
		j++;
		if ((j == index - 1) && (i < index))
		{
			j = 0;
			i++;
		}
	}
	freemap(sqr, *gridsize - 1);
	return (newsqr);
}
