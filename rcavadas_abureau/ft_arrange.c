/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/26 18:48:04 by rcavadas         ###   ########.fr       */
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
	index = 0;
	i = 0;
	j = 0;
	if (gridsize < 4)
		gridsize = 4;
	sqr = (char**)malloc(sizeof(char*) * gridsize);
	while (index <= gridsize)
	{
		sqr[index] = (char*)malloc(sizeof(char) * gridsize);
		index++;
	}
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
	return(sqr);
}

void		ft_arrange(int *tab)
{
	char	**sqr;
	int		nbtetri;
	int		gridsize;

	nbtetri = ft_nbpieces(tab);
	gridsize = ft_squareroot(nbtetri * 4);
	if (gridsize < 4)
		gridsize = 4;
	sqr = ft_sqrgen(nbtetri);
	sqr = ft_sqr_filler(tab, sqr, gridsize);
	ft_tabprint(sqr, gridsize);
}
