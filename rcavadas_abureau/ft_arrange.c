/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/28 15:52:00 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int	ft_nbpieces(int *tab)
{
	int		index;

	index = 0;
	while (tab[index++] != -1)
		;
	return (index - 1);
}

static char	**ft_sqrgen(int nbtetri)
{
	char	**sqr;
	int		index;
	int		i;
	int		j;
	int		gridsize;

	gridsize = ft_squareroot(nbtetri * 4);
	i = 0;
	j = 0;
	sqr = ft_taballoc(gridsize, &index);
	while ((i < index - 1) && (j < index))
	{
		sqr[i][j] = '.';
		j++;
		if ((j == index - 1) && (i < index))
		{
			j = 0;
			i++;
		}
	}
	return (sqr);
}

void		ft_arrange(int *tab)
{
	char	**sqr;
	int		nbtetri;
	int		gridsize;

	nbtetri = ft_nbpieces(tab);
	gridsize = ft_squareroot(nbtetri * 4);
	sqr = ft_sqrgen(nbtetri);
	sqr = ft_sqr_filler(tab, sqr, &gridsize);
	ft_tabprint(sqr, gridsize);
}
