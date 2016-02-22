/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 11:29:16 by abureau           #+#    #+#             */
/*   Updated: 2016/02/22 10:44:29 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_fillit.h"
#include "frankerz.h"

static void		incdecvar(int *a, int *b)
{
	*a += 1;
	*b -= 1;
}

static int		move_cursor(int tetrimino, t_params params)
{
	int	cursor;
	int t[2];

	cursor = 0;
	t[0] = Y;
	t[1] = X;
	while (g_put[tetrimino][cursor])
	{
		if (g_put[tetrimino][cursor] == '1')
			incdecvar(&t[0], &t[1]);
		else if (g_put[tetrimino][cursor] == '2')
			t[0] += 1;
		else if (g_put[tetrimino][cursor] == '4')
			t[1] -= 1;
		else if (g_put[tetrimino][cursor] == '6')
			t[1] += 1;
		else if (g_put[tetrimino][cursor] == '9' && ++t[1])
			t[0]--;
		if ((t[1] < 0) || (t[1] >= *SQR_SIZE) || (t[0] < 0)
				|| (t[0] >= *SQR_SIZE) || (params.sqr[t[0]][t[1]] != '.'))
			return (0);
		cursor++;
	}
	return (1);
}

static t_params	can_i_write(int tetrimino, t_params params)
{
	while ((X < *SQR_SIZE) && (Y < *SQR_SIZE))
	{
		if (params.sqr[Y][X] == '.')
			if (move_cursor(tetrimino, params))
			{
				params.is_writable = 1;
				return (params);
			}
		X += 1;
		if ((X >= *SQR_SIZE) && (Y < *SQR_SIZE))
		{
			X = 0;
			Y += 1;
		}
	}
	X = 0;
	Y = 0;
	params.is_writable = 0;
	return (params);
}

static t_params	put_in_sqr(int tetrimino, t_params params)
{
	int	cursor;

	cursor = 0;
	while (g_put[tetrimino][cursor])
	{
		params.sqr[Y][X] = (char)LETTER + 'A';
		if (g_put[tetrimino][cursor] == '1')
			incdecvar(&Y, &X);
		else if (g_put[tetrimino][cursor] == '2')
			Y += 1;
		else if (g_put[tetrimino][cursor] == '4')
			X -= 1;
		else if (g_put[tetrimino][cursor] == '6')
			X += 1;
		else if (g_put[tetrimino][cursor] == '9')
			incdecvar(&X, &Y);
		cursor++;
	}
	params.sqr[Y][X] = (char)LETTER + 'A';
	LETTER += 1;
	X = 0;
	Y = 0;
	return (params);
}

void			resolve(t_params params)
{
	int tmp;

	X = 0;
	Y = 0;
	while(LET_TO_PLACE != -1)
	{
		params = can_i_write(LET_TO_PLACE, params);
		if (params.is_writable == 1)
			params = put_in_sqr(LET_TO_PLACE, params);
	}
}
