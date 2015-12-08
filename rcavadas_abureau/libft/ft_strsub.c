/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:24:35 by abureau           #+#    #+#             */
/*   Updated: 2015/12/04 14:31:42 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tronc;
	unsigned int	tmpstart;
	unsigned int	i;

	i = 0;
	tmpstart = start + len;
	tronc = (char *)malloc(sizeof(char) * len + 1);
	if (!tronc)
		return (NULL);
	while (start != tmpstart)
	{
		tronc[i] = s[start];
		start++;
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
