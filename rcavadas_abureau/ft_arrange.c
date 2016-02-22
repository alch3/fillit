/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 13:00:27 by abureau          ###   ########.fr       */
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

static void	initstruct(int *tab, int *gridsize, t_params *params)
{
	int			i;

	i = 0;
	params->typearray = tab;
	params->sqr_size = gridsize;
	params->letter = 0;
	params->nbpiece = ft_nbpieces(params->typearray);
	params->sqr = ft_sqrgen(params->nbpiece);
	params->is_writable = 0;
	while(params->typearray[i] != -1)
	{
		params->tries_cnt[i] = 0;
		i++;
	}
}

void			ft_arrange(int *tab)
{
	
	int			nbtetri;
	int			gridsize;
	t_params	*params;

	nbtetri = ft_nbpieces(tab);
	gridsize = ft_squareroot(nbtetri * 4);
	initstruct(tab, &gridsize, params);
	params->sqr = ft_sqrinc(params->sqr,&gridsize);
	resolve(params);
//	ft_printstruct(params);
	ft_tabprint(params->sqr, gridsize);
}
