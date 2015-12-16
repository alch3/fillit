/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/16 22:08:04 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	main(void)
{
	t_lstptr testlist;

	testlist = NULL;
	testlist = ft_lstaddlast(testlist, 2, "For");
	testlist = ft_lstaddfirst(testlist, 0, "The");
	testlist = ft_lstaddfirst(testlist, 1, "Win");
	ft_lstprint(testlist);
	ft_putnbr(ft_lstcount(testlist));
	ft_lstdel(testlist);
	return (0);
}
