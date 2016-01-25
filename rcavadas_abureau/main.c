/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/25 17:35:40 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	main(int argc, char **argv)
{
	int	*types;
	int	index;
	int	i;

	i = 0;
	index = 0;
	if (argc != 2)
	{
		ft_putstr("error");
		return (0);
	}
	types = ft_filetotab(ft_filegetfd(argv[1]));
	ft_arrange(types);
	return (0);
}
