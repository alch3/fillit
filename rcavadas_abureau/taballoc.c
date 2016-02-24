/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taballoc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:27:56 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/23 15:06:04 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**taballoc(int gridsize, int *index)
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
