/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstruct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:21:57 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 14:21:59 by rcavadas         ###   ########.fr       */
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
		putchar(i + 'A');putstr(" = ");putnbr(params.triescnt[0]);
		putchar('\n');
		i++;
	}
}
