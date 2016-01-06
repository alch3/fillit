/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetolst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:53:48 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 12:58:57 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_filetolst(int fd, t_list **begin)
{
	char		buf[22];
	int			ret;
	int			index;
	int			typestab[26];
	index = 0;

	while ((ret = read(fd, buf, 21)))
	{
		if (ret == 20)
		{
			ft_putstr("last\n");
			buf[20] = '\n';
			buf[21] = '\0';
			ft_putstr(buf);
			ft_putnbr(ft_strlen(buf));
		}
	ft_lstcmp(begin, buf);
//	index++;
	}
}
