/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetotab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:41:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/26 18:58:44 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	*ft_filetotab(int fd)
{
	char	buf[22];
	int		ret;
	int		index;
	int		*tab;
	int		nbchar;

	index = 0;
	nbchar = 0;
	tab = (int*)malloc(sizeof(int) * 27);
	while ((ret = read(fd, buf, 21)))
	{
		if (ret == 20)
		{
			buf[20] = '\n';
			buf[21] = '\0';
		}
		tab[index++] = ft_filecomp(buf);
		nbchar = nbchar + ret;
	}
	if (nbchar % 21 == 0)
		ft_error(tab);
	ft_fileclose(fd);
	tab[index] = -1;
	return (tab);
}
