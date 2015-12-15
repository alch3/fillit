/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:18:50 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 23:20:16 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

void	ft_lstdel(t_lstptr element)
{
	t_lstptr tmp1;
	t_lstptr tmp2;

	tmp1 = element;
	tmp2 = tmp1->next;
	while (tmp2 != NULL)
	{
		free(tmp1->tetrimino);
		free(tmp1);
		tmp1 = tmp2;
		tmp2 = tmp1->next;
	}
}
