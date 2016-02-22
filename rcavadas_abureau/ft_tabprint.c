/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 18:08:38 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 13:02:56 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	tabprint(char **sqr, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((i < size) && (j <= size))
	{
		putchar(sqr[i][j]);
		j++;
		if ((j == size) && (i < size))
		{
			putchar('\n');
			j = 0;
			i++;
		}
	}
}
