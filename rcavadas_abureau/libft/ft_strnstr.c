/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:35:54 by abureau           #+#    #+#             */
/*   Updated: 2015/12/04 13:21:04 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	char			*str;

	str = ft_strnew(n);
	str = ft_strncpy(str, s1, n + 1);
	i = 0;
	if (!s2)
		return ((char*)s1);
	if (!s1)
		return ((char*)s2);
	while (s1[i] != '\0' && i < n)
	{
		if (ft_strncmp(&str[i], s2, ft_strlen(s2)) == 0)
			return ((char*)&s1[i]);
		i++;
		if (i >= n)
			return (NULL);
	}
	return (NULL);
}
