/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_valid_tetriminos.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:39:59 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/09 16:40:02 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "libft.h"

void	ft_print_valid_tetriminos(tetri_list **beginning)
{
	if (*beginning == NULL)
		return ;
	tmp = *beginning;
	while (tmp->next)
	{
		ft_putstr(tmp->tetrimino);
		ft_putstr(" -> id : ");
		ft_putnbr(tmp->id);
		ft_putchar('/n');
		tmp = tmp->next;
	}
	ft_putstr("FIN")
}