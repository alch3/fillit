/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:05:38 by abureau           #+#    #+#             */
/*   Updated: 2015/12/01 13:03:13 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp1;
	char	*tmp2;
	char	*res;

	tmp1 = ft_strdup((char*)s1);
	tmp2 = ft_strdup((char*)s2);
	res = ft_strcat(tmp1, tmp2);
	return (res);
}
