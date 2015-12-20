/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:27:35 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/17 17:49:36 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static void	ft_inittwovar(int *a, int *b)
{
	*a = 0;
	*b = 0;
}

static void	ft_inctwovar(int *a, int *b)
{
	*a += 1;
	*b += 1;
}

static char	*ft_strnew(size_t size)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = (char*)malloc(sizeof(char) * (size + 1));
	if (s)
	{
		while (i < size)
		{
			s[i] = '\0';
			i++;
		}
		return (s);
	}
	else
		return (NULL);
}

char		*ft_strtrimchar(char const *s, char c)
{
	int		len;
	int		i;
	int		j;
	char	*strim;

	ft_inittwovar(&i, &j);
	len = ft_strlen(s);
	while (s[len - 1] == c)
	{
		len--;
		if (len == 0)
			return (NULL);
	}
	while (s[i] == c)
	{
		len--;
		i++;
	}
	strim = ft_strnew(len);
	while (j != len)
	{
		strim[j] = s[i];
		ft_inctwovar(&i, &j);
	}
	return (strim);
}
