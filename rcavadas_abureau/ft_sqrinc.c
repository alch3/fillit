/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrinc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 13:04:25 by abureau           #+#    #+#             */
/*   Updated: 2016/02/09 15:51:13 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

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

char		**ft_sqrinc(char **sqr, int *gridsize)
{
	char	**newsqr;
	int		index;
	int		i;
	int		j;

	i = 0;
	j = 0;
	*gridsize += 1;
	newsqr = ft_taballoc(*gridsize, &index);
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
