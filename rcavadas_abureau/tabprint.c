/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:28:04 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:28:10 by rcavadas         ###   ########.fr       */
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
