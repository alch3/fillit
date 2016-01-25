/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 19:01:49 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/25 19:24:57 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	can_i_write(char **sqr, int size)
{
}

static char	**put_in_sqr(char **sqr, int size, char letter, int *coord)
{
}

int	id00(char **sqr, int size, char letter)
{
	int	coord[2];

	coord[0] = 0;
	coord[1] = 0;
	while ((coord[0] < size) && (coord[1] <= size))
	{
		if (can_i_write(sqr, size))
			sqr = put_in_sqr(sqr, size, letter, coord);
	}
}
