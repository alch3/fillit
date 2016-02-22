/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:22:44 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:22:45 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	absolute(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}

void		putnbr(int i)
{
	if (i < 0)
		putchar('-');
	if (i < 10 && i > -10)
		putchar('0' + absolute(i));
	else
	{
		putnbr(absolute(i / 10));
		putchar('0' + absolute(i % 10));
	}
}
