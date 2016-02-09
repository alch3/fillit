/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 17:43:46 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/09 16:31:01 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"
#include "frankerz.h"

static void	incdecvar(int *a, int *b)
{
	*a += 1;
	*b -= 1;
}

static int	move_cursor(int tetrimino, char **sqr, int s, int *coord)
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
		else if (g_put[tetrimino][cursor] == '9')
			incdecvar(&t[1], &t[0]);
		if ((t[1] < 0) || (t[1] >= s) || (t[0] < 0) || (t[0] >= s)
				|| (sqr[t[0]][t[1]] != '.'))
			return (0);
		cursor++;
	}
	return (1);
}

static int	can_i_write(int tetrimino, char **sqr, int size, int *coord)
{
	while ((X < size) && (Y < size))
	{
		if (sqr[Y][X] == '.')
			if (move_cursor(tetrimino, sqr, size, coord))
				return (1);
		X += 1;
		if ((X == size) && (Y < size))
		{
			X = 0;
			Y += 1;
		}
	}
	return (0);
}

static char	**put_in_sqr(int tetrimino, int *letter, char **sqr, int *coord)
{
	int	cursor;

	cursor = 0;
	while (g_put[tetrimino][cursor])
	{
		sqr[Y][X] = (char)*letter + 'A';
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
	sqr[Y][X] = (char)*letter + 'A';
	*letter += 1;
	X = 0;
	Y = 0;
	return (sqr);
}

char		**ft_sqr_filler(int *tab, char **sqr, int *size)
{
	int	*coord;
	int	letter;
	coord = (int*)malloc(sizeof(int) * 5);
	Y = 0;
	X = 0;
	LAST = 0;
	TMPX = 0;
	TMPY = 0;
	letter = 0;
	while (tab[letter] != -1)
	{
		X = 0;
		Y = 0;
//		ft_tabprint(sqr, *size);

		if((can_i_write(tab[letter], sqr, *size, coord)) == 0 && (letter <= 0))
		{
			sqr = ft_sqrinc(sqr, size);
		}
			else if(can_i_write(tab[letter], sqr, *size, coord) == 0)
		{
			ft_putendl("I can't write");
			letter--;
			ft_searchdot(sqr, coord, size, letter);
		}
		else
		{
			ft_putendl("I can write");
			put_in_sqr(tab[letter], &letter, sqr, coord);
		}
	}
	free(coord);
	return (sqr);
}
