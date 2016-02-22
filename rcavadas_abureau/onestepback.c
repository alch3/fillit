/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onestepback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:10:49 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 17:39:42 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reinitcntrs(t_params *params)
{
	int	tmpletter;

	tmpletter = LETTER + 1;
	while (tmpletter <= NBPIECE)
	{
		params->triescnt[tmpletter] = 0;
		tmpletter++;
	}
}

void	onestepback(t_params *params)
{
	int		nl;
	int		i;
	int		j;

	nl = 4;
	i = 0;
	j = 0;
	reinitcntrs(params);
	while (nl > 0)
	{
		if (params->sqr[i][j] == LETTER + 'A')
		{
			params->sqr[i][j] = '.';
			nl--;
		}
		j++;
		if (j == *SQR_SIZE)
		{
			i++;
			j = 0;
		}
	}
}
