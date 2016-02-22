/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 13:58:45 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:00:31 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		nbpieces(int *tab)
{
	int		index;

	index = 0;
	while (tab[index++] != -1);
	return (index - 1);
}

static char		**sqrgen(int nbtetri)
{
	char	**sqr;
	int		index;
	int		i;
	int		j;
	int		gridsize;

	gridsize = squareroot(nbtetri * 4);
	i = 0;
	j = 0;
	sqr = taballoc(gridsize, &index);
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
	int			i;
	t_params	params;

	i = 0;
	params.typearray = tab;
	params.sqrsize = gridsize;
	params.letter = 0;
	params.nbpiece = nbpieces(params.typearray);
	params.sqr = sqrgen(params.nbpiece);
	params.is_writable = 0;
	while(params.typearray[i] != -1)
	{
		params.triescnt[i] = 0;
		i++;
	}
	return (params);
}

void			ft_arrange(int *tab)
{
	
	int			nbtetri;
	int			gridsize;
	t_params	params;

	nbtetri = nbpieces(tab);
	gridsize = squareroot(nbtetri * 4);
	params = initstruct(tab, &gridsize);
	params.sqr = sqrinc(params.sqr,&gridsize);
	resolve(params);
	printstruct(params);
	tabprint(params.sqr, gridsize);
}
