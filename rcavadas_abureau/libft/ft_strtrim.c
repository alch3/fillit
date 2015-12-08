/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:24:36 by abureau           #+#    #+#             */
/*   Updated: 2015/12/05 14:47:03 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*strim;

	ft_initthreevar(&i, &j, &len);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
	{
		len--;
		if (len == 0)
			return ("");
	}
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		ft_incdecvar(&i, &len);
	strim = (char*)malloc(sizeof(char) * (len));
	if (!strim)
		return (NULL);
	strim[len] = '\0';
	while (j < len)
	{
		strim[j] = s[i];
		ft_inctwovar(&j, &i);
	}
	return (strim);
}
