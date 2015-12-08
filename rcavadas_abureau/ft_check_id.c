/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:32:10 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/08 18:32:13 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int 	ft_check_id(unsigned int index)
{
	if (index < 4)
		return (0);
	else if (index >= 4 && index <= 12)
		return (1);
	else if (index >= 13 && index <= 18)
		return (2);
	else if (index >= 19 && index <= 24)
		return (3);
		else
			return(ft_nextcheck);
}