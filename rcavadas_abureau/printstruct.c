/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:21:57 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 23:05:40 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	printstruct(t_params params)
{
	int i;

	i = 0;
	ft_putstr("\nnb tetri : ");
	ft_putnbr(params.nbpiece);
	ft_putstr("\n[0]  =  ");
	ft_putnbr(params.typearray[0]);
	ft_putstr("\n[1]  =  ");
	ft_putnbr(params.typearray[1]);
	ft_putstr("\n[2]  =  ");
	ft_putnbr(params.typearray[2]);
	ft_putstr("\n[3]  =  ");
	ft_putnbr(params.typearray[3]);
	ft_putendl("\n\nRECAP STATE FAIL\n\n");
	while (params.typearray[i] != -1)
	{
		ft_putchar(i + 'A');
		ft_putstr(" = ");
		ft_putnbr(params.triescnt[0]);
		ft_putchar('\n');
		i++;
	}
}
