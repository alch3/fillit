/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:20:32 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 19:34:45 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

static int	ft_absolute(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}

void		ft_putnbr(int i)
{
	if (i < 0)
		ft_putchar('-');
	if (i < 10 && i > -10)
		ft_putchar('0' + ft_absolute(i));
	else
	{
		ft_putnbr(ft_absolute(i / 10));
		ft_putchar('0' + ft_absolute(i % 10));
	}
}
