/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:19:57 by abureau           #+#    #+#             */
/*   Updated: 2015/12/05 14:46:03 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_strtrimc(char const *s, char c)
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

static unsigned int	ft_countword(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s && *s)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				while (s[i] == c)
					i++;
				j++;
			}
			else
				i++;
		}
		j++;
	}
	return (j);
}

static char			**ft_tabfill(char **tab, char const *s, char c, size_t nbw)
{
	int		i;
	size_t	word;
	int		j;

	i = 0;
	word = 0;
	j = 0;
	while (word < nbw)
	{
		if (s[i] == c || s[i] == '\0')
		{
			tab[word][j] = '\0';
			word++;
			j = 0;
			while (s[i] == c)
				i++;
		}
		else
		{
			tab[word][j] = s[i];
			j++;
			i++;
		}
	}
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	int		var[4];
	char	**tab;
	char	*trim;

	trim = ft_strtrimc(s, c);
	var[3] = ft_countword(trim, c);
	tab = (char**)malloc(sizeof(*tab) * (var[3] + 1));
	if (!tab)
		return (NULL);
	ft_initthreevar(&var[0], &var[1], &var[2]);
	while (var[0] < var[3])
	{
		if (trim[var[1]] == c || trim[var[1]] == '\0')
		{
			tab[var[0]] = ft_strnew(var[2] + 1);
			if (!tab[var[0]])
				return (NULL);
			while (trim[var[1]] == c)
				var[1]++;
			var[0]++;
			var[2] = 1;
		}
		ft_inctwovar(&var[1], &var[2]);
	}
	return (ft_tabfill(tab, trim, c, var[3]));
}
