/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filetotab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:01:53 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 22:27:10 by rcavadas         ###   ########.fr       */
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

//	putendl("filetotab1");
	index = 0;
	nbchar = 0;
	tab = (int*)malloc(sizeof(int) * 27);
	while ((ret = read(fd, buf, 21)))
	{
//	putendl("filetotab2");
		if (ret == 20)
		{
			buf[20] = '\n';
			buf[21] = '\0';
		}
		tab[index++] = filecomp(buf);
		nbchar = nbchar + ret;
	}
//	putstr("nbchar value: ");
//	putnbr(nbchar);
//	putchar('\n');
	if (nbchar % 21 == 0)
		error(tab);
	fileclose(fd);
	tab[index] = -1;
	return (tab);
}
