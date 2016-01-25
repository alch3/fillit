/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecomp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:44:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/25 12:45:51 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"
#include "kappa.h"

int	ft_filecomp(const char *str)
{
	int	i;

	i = 0;
	while (i < 113)
	{
		if (ft_strcmp(g_valid[i], str) == 0)
			return (ft_getid(i));
		i++;
	}
	return (-1);
}
