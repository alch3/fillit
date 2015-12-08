/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:18:48 by abureau           #+#    #+#             */
/*   Updated: 2015/12/05 14:36:13 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *s)
{
	int	i;
	int	state;
	int	p;

	ft_initthreevar(&i, &p, &state);
	s = ft_strtrim(s);
	if (!s)
		return (0);
	while (*s == '\r' || *s == '\v' || *s == '\f')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '+')
			p = 1;
		state++;
		s++;
	}
	while (*s != '\0' && ft_isdigit(*s))
		i = i * 10 + *s++ - '0';
	if (state > 1)
		return (0);
	else if (state == 1)
		if (!p)
			i = -i;
	return (i);
}
