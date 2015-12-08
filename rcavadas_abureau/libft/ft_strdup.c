/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:04:09 by abureau           #+#    #+#             */
/*   Updated: 2015/11/25 16:29:41 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if (s1)
	{
		dest = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
		if (dest)
		{
			ft_strcpy(dest, s1);
			return (dest);
		}
	}
	return (NULL);
}
