/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:23:09 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 18:08:50 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "frankerz.h"

static int		move_cursor(int tetrimino, t_params *params)
{
	int	cursor;
	int t[2];

	cursor = 0;
	t[0] = Y;
	t[1] = X;
	while (g_put[tetrimino][cursor])
	{
		if (g_put[tetrimino][cursor] == '1' && ++t[0])
			t[1]--;
		else if (g_put[tetrimino][cursor] == '2')
			t[0] += 1;
		else if (g_put[tetrimino][cursor] == '4')
			t[1] -= 1;
		else if (g_put[tetrimino][cursor] == '6')
			t[1] += 1;
		else if (g_put[tetrimino][cursor] == '9' && ++t[1])
			t[0]--;
		if ((t[1] < 0) || (t[1] >= *SQR_SIZE) || (t[0] < 0)
				|| (t[0] >= *SQR_SIZE) || (params->sqr[t[0]][t[1]] != '.'))
			return (0);
		cursor++;
	}
	return (1);
}

static void	caniwrite(int tetrimino, t_params *params)
{
	int cnt;

	cnt = 0;
	while ((X < *SQR_SIZE) && (Y < *SQR_SIZE))
	{
		if (params->sqr[Y][X] == '.')
			if (move_cursor(tetrimino, params))
			{
				if (params->triescnt[LETTER] == cnt)
				{
					params->iswritable = 1;
					return ;
				}
				cnt++;
			}
		X += 1;
		if ((X >= *SQR_SIZE) && (Y < *SQR_SIZE))
		{
			X = 0;
			Y += 1;
		}
	}
	LETTER--;
	X = 0;
	Y = 0;
	params->iswritable = 0;
}

static void	putinsqr(int tetrimino, t_params *params)
{
	int	cursor;

	cursor = 0;
	while (g_put[tetrimino][cursor])
	{
		params->sqr[Y][X] = (char)LETTER + 'A';
		if (g_put[tetrimino][cursor] == '1' && ++Y)
			X--;
		else if (g_put[tetrimino][cursor] == '2')
			Y += 1;
		else if (g_put[tetrimino][cursor] == '4')
			X -= 1;
		else if (g_put[tetrimino][cursor] == '6')
			X += 1;
		else if (g_put[tetrimino][cursor] == '9' && ++X)
			Y--;
		cursor++;
	}
	params->sqr[Y][X] = (char)LETTER + 'A';
	LETTER += 1;
	X = 0;
	Y = 0;
}

void			resolve(t_params *params)
{
	int tmp;

	X = 0;
	Y = 0;
	while (LET_TO_PLACE != -1)
	{
		caniwrite(LET_TO_PLACE, params);
		if (params->iswritable == 1)
			putinsqr(LET_TO_PLACE, params);
		else if (params->iswritable == 0 && LETTER == -1)
		{
			params->sqr = sqrinc(params->sqr, SQR_SIZE);
			reinitcntrs(params);
			LETTER = 0;
		}
		else if (params->iswritable == 0)
		{
			onestepback(params);
			params->triescnt[LETTER]++;
		}
	}
}
