/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 16:03:58 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/07 17:47:44 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_fillit.h>

static int	ft_nbpieces(int *tab)
{
	int	index;

	index = 0;
	while (tab[index++])
	return (index);
}

static void	ft_sqrgen(int i)
{
	int	**sqr;

//	TO DO : IMPLEMENTER UNE FONCTION DE CALCUL DE RACINE CARREE
//	FORMULE DE CREATION DE SQR POUR MALLOC : racine de (nbtetri*4)
	sqr = (int**)malloc(sizeof(int) )
}

void	ft_arrange(int *tab)
{
	int	**sqr;
	int	nbtetri;

	nbtetri = ft_nbpieces(tab);
	sqr = ft_sqrgen(nbtetri);
}
