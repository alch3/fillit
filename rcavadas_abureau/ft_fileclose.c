/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closefile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 22:45:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 16:12:11 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int	ft_fileclose(int fd)
{
	if (close(fd) == -1)
		ft_error(NULL, NULL);
	return (1);
}
