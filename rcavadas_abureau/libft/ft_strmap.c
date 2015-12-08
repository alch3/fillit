/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:43:03 by abureau           #+#    #+#             */
/*   Updated: 2015/12/04 14:28:12 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(s));
	if (s != NULL && f != NULL)
	{
		while (i != ft_strlen(s))
		{
			tmp[i] = f(s[i]);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
