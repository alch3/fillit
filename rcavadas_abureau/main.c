/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 11:55:56 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	main(int argc, char **argv)
{
	t_list	*lstvalid;
	t_list	*lsttoarrange;

	if (argc != 2)
	{
		ft_putstr("error");
		return (0);
	}
	ft_validtolst(ft_filegetfd("valid_tetriminos.txt"), &lstvalid);
	ft_lstprint(lstvalid);
	ft_filetolst(ft_filegetfd(argv[1]), &lstvalid);
	return (0);
}
