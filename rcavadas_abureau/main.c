/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:35:13 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/17 17:52:39 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	main(int argc, char **argv)
{
	t_lstptr	lstvalid;
	t_lstptr	lsttoarrange;

	if (argc != 2)
	{
		ft_putstr("error");
		return (0);
	}
	ft_filetolst(ft_filegetfd("valid_tetriminos.txt"), lstvalid);
	ft_filetolst(ft_filegetfd(argv[1]), lsttoarrange);
	if (ft_lstcmp(lstvalid, lsttoarrange) != 0)
		return (0);

	return (0);
}
