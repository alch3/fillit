/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:08:05 by abureau           #+#    #+#             */
/*   Updated: 2015/12/04 14:29:50 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char				*s;
	unsigned int		i;

	i = 0;
	s = (char*)malloc(sizeof(char) * (size + 1));
	if (s)
	{
		while (i < size)
		{
			s[i] = '\0';
			i++;
		}
		return (s);
	}
	else
		return (NULL);
}
