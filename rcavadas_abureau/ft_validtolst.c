/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validtolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:12:24 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/05 14:52:33 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_validtolst(int fd, t_list *element)
{
	char		buf[22];
	int			ret;
	int			index;

	index = 0;
	while ((ret = read(fd, buf, 21)))
	{
		buf[ret] = 0;
		ft_lstaddlast(element, index++, buf);
		ft_putstr(element->tetrimino);
	}
}
