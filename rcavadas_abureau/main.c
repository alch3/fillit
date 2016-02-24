/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/23 18:36:25 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int *types;

	types = NULL;
	if (argc == 1)
	{
		ft_putendl("usage: ./fillit source_file");
		return (0);
	}
	else if (argc == 2)
		types = filetotab(filegetfd(argv[1]));
	else
		error(NULL);
	arrange(types);
	return (0);
}
