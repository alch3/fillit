/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:39:27 by abureau           #+#    #+#             */
/*   Updated: 2015/12/01 13:13:10 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*tmp2;
	size_t	i;

	i = 0;
	tmp2 = ft_strdup((char*)src);
	if (!tmp2)
		return (NULL);
	tmp = (char*)dst;
	while (len != i)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	dst = (void*)tmp;
	return (dst);
}
