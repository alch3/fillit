/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstruct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 12:07:36 by abureau           #+#    #+#             */
/*   Updated: 2016/02/22 12:56:39 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void printstruct(t_params params)
{
	int i;
	
	i = 0;
	putstr("\nnb tetri : ");putnbr(params.nbpiece);
	putstr("\n[0]  =  ");putnbr(params.typearray[0]);
	putstr("\n[1]  =  ");putnbr(params.typearray[1]);
	putstr("\n[2]  =  ");putnbr(params.typearray[2]);
	putstr("\n[3]  =  ");putnbr(params.typearray[3]);
	putendl("\n\nRECAP STATE FAIL\n\n");
	while(params.typearray[i] != -1)
	{
		putchar(i + 'A');putstr(" = ");putnbr(params.tries_cnt[0]);
		putchar('\n');
		i++;
	}
}
