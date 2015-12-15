/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 23:44:32 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	main(void)
{
	t_lstptr testlist;

	testlist = NULL;
	testlist = ft_lstaddlast(testlist, 3, "element3");
	testlist = ft_lstaddfirst(testlist, 0, "element0");
	testlist = ft_lstaddfirst(testlist, 1, "element1");
	testlist = ft_lstaddfirst(testlist, 2, "element2");
	ft_lstprint(testlist);
	return (0);
}
