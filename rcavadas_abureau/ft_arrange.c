/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/20 18:18:22 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int		ft_nbpieces(int *tab)
{
	int		index;

	index = 0;
	while (tab[index++] != -1);
	return (index - 1);
}

static char		**ft_sqrgen(int nbtetri)
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

static t_params	initstruct(int *tab, int *gridsize)
{
	int i;

	i = 0;
	t_params params;
	params.typearray = tab;
	params.sqr_size = gridsize;
	params.letter = 0;
	params.nbpiece = ft_nbpieces(params.typearray);
	params.sqr = ft_sqrgen(params.nbpiece);	
	while(params.typearray[i] != -1)
	{
		params.tries_cnt[i] = 0;
		i++;
	}
	return (params);
}

void			ft_arrange(int *tab)
{
	
	int			nbtetri;
	int			gridsize;
	t_params	params;

	nbtetri = ft_nbpieces(tab);
	ft_putstr("nbtetri = "); ft_putnbr(nbtetri); ft_putchar('\n');
	gridsize = ft_squareroot(nbtetri * 4);
	ft_putstr("gridsize = "); ft_putnbr(gridsize); ft_putchar('\n');
	params = initstruct(tab, &gridsize);
	params.sqr = ft_sqrinc(params.sqr,&gridsize);
	resolve(params);
	ft_printstruct(params);
	ft_tabprint(params.sqr, gridsize);
}
