/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:40:07 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/16 19:08:43 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

t_lstptr	ft_lstaddfirst(t_lstptr element, int i, const char *str)
{
	t_lstptr	newelement;

	newelement = (t_lstptr)malloc(sizeof(t_list));
	newelement->index = i;
	newelement->tetrimino = ft_strdup(str);
	newelement->next = element;
	return (newelement);
}
