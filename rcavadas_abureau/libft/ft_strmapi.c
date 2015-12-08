/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:07:27 by abureau           #+#    #+#             */
/*   Updated: 2015/12/04 14:28:45 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s) + 1);
	if (s && f)
	{
		while (s[i])
		{
			tmp[i] = f(i, s[i]);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
