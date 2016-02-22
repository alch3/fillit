/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:15:20 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 15:13:21 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		cntpieces(int *tab)
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

static void	initstruct(int *tab, int *gridsize, t_params *params)
{
	int			i;

	i = 0;
	params->typearray = tab;
	params->sqrsize = gridsize;
	params->letter = 0;
	params->nbpiece = cntpieces(params->typearray);
	params->sqr = sqrgen(params->nbpiece);
	params->iswritable = 0;
	while(params->typearray[i] != -1)
	{
		params->triescnt[i] = 0;
		i++;
	}
}

void			arrange(int *tab)
{
	
	int			nbtetri;
	int			gridsize;
	t_params	params;

	nbtetri = cntpieces(tab);
	gridsize = squareroot(nbtetri * 4);
	initstruct(tab, &gridsize, &params);
	params.sqr = sqrinc(params.sqr,&gridsize);
	resolve(&params);
//	ft_printstruct(params);
	tabprint(params.sqr, gridsize);
}
