/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 22:28:48 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int	*types;
	int	index;
	int	i;

	i = 0;
	index = 0;
//	putstr("argc value: ");
	putchar('\n');
	if (argc > 2)
		error(NULL);
	if (argc == 2)
		types = filetotab(filegetfd(argv[1]));
	else if (argc == 1)
		types = filetotab(0);
	arrange(types);
	return (0);
}
