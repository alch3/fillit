/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filetotab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:01:53 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/23 17:54:15 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*filetotab(int fd)
{
	char	buf[22];
	int		ret;
	int		index;
	int		*tab;
	int		nbchar;

	index = 0;
	nbchar = 0;
	tab = (int*)malloc(sizeof(int) * 27);
	if (!tab)
		error(tab);
	while ((ret = read(fd, buf, 21)))
	{
		if (ret == 20)
			buf[20] = '\n';
		buf[21] = '\0';
		tab[index++] = filecomp(buf);
		nbchar = nbchar + ret;
	}
	if (nbchar % 21 == 0)
		error(tab);
	if (fd)
		fileclose(fd);
	tab[index] = -1;
	return (tab);
}
