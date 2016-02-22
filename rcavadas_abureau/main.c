/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 23:14:46 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int *types;
	int index;
	int i;

	i = 0;
	index = 0;
	if (argc == 1)
		types = filetotab(0);
	if (argc == 2)
		types = filetotab(filegetfd(argv[1]));
	else
		error(NULL);
	arrange(types);
	return (0);
}
