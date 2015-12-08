/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:25:45 by abureau           #+#    #+#             */
/*   Updated: 2015/12/01 12:57:48 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int		j;

	j = n;
	if (ft_strlen(s2) < j)
		j = ft_strlen(s2);
	if (ft_strlen(s1) < j)
		j = ft_strlen(s1);
	if (ft_strncmp(s1, s2, j) == 0)
		return (1);
	return (0);
}
