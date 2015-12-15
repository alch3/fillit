/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 23:41:08 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 23:43:10 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

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
