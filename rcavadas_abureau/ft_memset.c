/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 17:11:18 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/22 17:13:56 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char*)b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned int)c;
		i++;
	}
	b = (void*)s;
	return (b);
}
