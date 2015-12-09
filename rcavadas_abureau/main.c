/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:06:17 by abureau           #+#    #+#             */
/*   Updated: 2015/12/09 17:10:14 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_list.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	ft_putendl("error");
	return (0);
	if (!ft_file_isvalid(argv[1]))
		ft_putendl("error");
	return (0);
}















