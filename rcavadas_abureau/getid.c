/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:20:33 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:20:38 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	gettypebis(int index)
{
	if (index >= 65 && index <= 70)
		return (11);
	else if (index >= 71 && index <= 76)
		return (12);
	else if (index >= 77 && index <= 82)
		return (13);
	else if (index >= 83 && index <= 88)
		return (14);
	else if (index >= 89 && index <= 94)
		return (15);
	else if (index >= 95 && index <= 100)
		return (16);
	else if (index >= 101 && index <= 106)
		return (17);
	else if (index >= 107 && index <= 112)
		return (18);
	else
		return (-1);
}

static int	gettype(int index)
{
	if (index >= 0 && index <= 3)
		return (0);
	else if (index >= 4 && index <= 12)
		return (1);
	else if (index >= 13 && index <= 18)
		return (2);
	else if (index >= 19 && index <= 24)
		return (3);
	else if (index >= 25 && index <= 30)
		return (4);
	else if (index >= 31 && index <= 36)
		return (5);
	else if (index >= 37 && index <= 40)
		return (6);
	else if (index >= 41 && index <= 46)
		return (7);
	else if (index >= 47 && index <= 52)
		return (8);
	else if (index >= 53 && index <= 58)
		return (9);
	else if (index >= 59 && index <= 64)
		return (10);
	else
		return (gettypebis(index));
}

int			getid(int tabindex)
{
	return (gettype(tabindex));
}
