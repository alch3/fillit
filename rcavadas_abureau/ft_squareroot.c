/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squareroot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:54:28 by abureau           #+#    #+#             */
/*   Updated: 2016/01/19 14:23:05 by abureau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_squareroot(int a)
{
	int x;

	x = 1;
	while (x * x < a)
		++x;
	return (x);
}


int main(int ac, char **av)
{
	if (ac == 2)
		printf("le carre de %d vaut : %d \n", ft_squareroot(atoi(av[1])), atoi(av[1]));
	return (0);
}
