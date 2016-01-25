/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/25 18:53:55 by rcavadas         ###   ########.fr       */
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

	index = 0;
	i = 0;
	j = 0;
	sqr = (char**)malloc(sizeof(char*) * ft_squareroot(nbtetri * 4));
	while (index <= ft_squareroot(nbtetri * 4))
	{
		sqr[index] = (char*)malloc(sizeof(char) * ft_squareroot(nbtetri * 4));
		index++;
	}
	while ((i < index - 1) && (j < index))
	{
		sqr[i][j] = '0';
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

	nbtetri = ft_nbpieces(tab);
	sqr = ft_sqrgen(nbtetri);
	ft_tabprint(sqr, 6);
}
