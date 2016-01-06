/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:15:41 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 16:13:34 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	ft_filegetfd(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_error(NULL, NULL);
	return (fd);
}
