/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validtolst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:12:24 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/22 18:01:28 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

t_lstptr	ft_filetolst(int fd, t_lstptr element)
{
	char	buf[22];
	int		ret;
	int		index;

	buf[21] = '\0';
	while ((ret = read(fd, buf, 21)))
	{
		ft_lstaddlast(element, index++, buf);
	}
	return (element);
}
