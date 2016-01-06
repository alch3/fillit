/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:53:48 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 16:21:01 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	*ft_filetolst(int fd, t_list **begin)
{
	char		buf[22];
	int			ret;
	int			index;
	int			*tab;
	int			nbchar;

	index = 0;
	tab = (int*)malloc(sizeof(int) * 27);
	nbchar = 0;
	while ((ret = read(fd, buf, 21)))
	{
		if (ret == 20)
		{
			buf[20] = '\n';
			buf[21] = '\0';
		}
		tab[index] = ft_lstcmp(begin, buf);
		index++;
		nbchar = nbchar + ret;
	}
	ft_fileclose(fd);
	tab[index] = -1;
	ft_lstdel(begin);
	if (nbchar % 21 == 0)
		ft_error(begin, tab);
	return (tab);
}
