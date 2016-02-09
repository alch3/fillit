/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:25:28 by abureau           #+#    #+#             */
/*   Updated: 2016/01/28 15:33:42 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

char	**ft_taballoc(int gridsize, int *index)
{
	char	**newsqr;

	*index = 0;
	newsqr = (char**)malloc(sizeof(char*) * gridsize);
	while (*index <= gridsize)
	{
		newsqr[*index] = (char*)malloc(sizeof(char) * gridsize);
		*index += 1;
	}
	return (newsqr);
}
