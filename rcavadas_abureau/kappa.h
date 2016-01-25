/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kappa.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abureau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:55:18 by abureau           #+#    #+#             */
/*   Updated: 2016/01/25 19:24:58 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAPPA_H
# define KAPPA_H

# define F0000 '.','.','.','.','\n'
# define F0001 '.','.','.','#','\n'
# define F0010 '.','.','#','.','\n'
# define F0011 '.','.','#','#','\n'
# define F0100 '.','#','.','.','\n'
# define F0101 '.','#','.','#','\n'
# define F0110 '.','#','#','.','\n'
# define F0111 '.','#','#','#','\n'
# define F1000 '#','.','.','.','\n'
# define F1001 '#','.','.','#','\n'
# define F1010 '#','.','#','.','\n'
# define F1011 '#','.','#','#','\n'
# define F1100 '#','#','.','.','\n'
# define F1101 '#','#','.','#','\n'
# define F1110 '#','#','#','.','\n'
# define F1111 '#','#','#','#','\n'
# define EDL '\n','\0'

char	g_valid[113][22] = {{F1111, F0000, F0000, F0000, EDL},
	{F0000, F1111, F0000, F0000, EDL},
	{F0000, F0000, F1111, F0000, EDL},
	{F0000, F0000, F0000, F1111, EDL},
	{F1100, F1100, F0000, F0000, EDL},
	{F0110, F0110, F0000, F0000, EDL},
	{F0011, F0011, F0000, F0000, EDL},
	{F0000, F1100, F1100, F0000, EDL},
	{F0000, F0110, F0110, F0000, EDL},
	{F0000, F0011, F0011, F0000, EDL},
	{F0000, F0000, F1100, F1100, EDL},
	{F0000, F0000, F0110, F0110, EDL},
	{F0000, F0000, F0011, F0011, EDL},
	{F1000, F1000, F1100, F0000, EDL},
	{F0100, F0100, F0110, F0000, EDL},
	{F0010, F0010, F0011, F0000, EDL},
	{F0000, F1000, F1000, F1100, EDL},
	{F0000, F0100, F0100, F0110, EDL},
	{F0000, F0010, F0010, F0011, EDL},
	{F0100, F0100, F1100, F0000, EDL},
	{F0010, F0010, F0110, F0000, EDL},
	{F0001, F0001, F0011, F0000, EDL},
	{F0000, F0100, F0100, F1100, EDL},
	{F0000, F0010, F0010, F0110, EDL},
	{F0000, F0001, F0001, F0011, EDL},
	{F1100, F0100, F0100, F0000, EDL},
	{F0110, F0010, F0010, F0000, EDL},
	{F0011, F0001, F0001, F0000, EDL},
	{F0000, F1100, F0100, F0100, EDL},
	{F0000, F0110, F0010, F0010, EDL},
	{F0000, F0011, F0001, F0001, EDL},
	{F1100, F1000, F1000, F0000, EDL},
	{F0110, F0100, F0100, F0000, EDL},
	{F0011, F0010, F0010, F0000, EDL},
	{F0000, F1100, F1000, F1000, EDL},
	{F0000, F0110, F0100, F0100, EDL},
	{F0000, F0011, F0010, F0010, EDL},
	{F1000, F1000, F1000, F1000, EDL},
	{F0100, F0100, F0100, F0100, EDL},
	{F0010, F0010, F0010, F0010, EDL},
	{F0001, F0001, F0001, F0001, EDL},
	{F0100, F1110, F0000, F0000, EDL},
	{F0010, F0111, F0000, F0000, EDL},
	{F0000, F0100, F1110, F0000, EDL},
	{F0000, F0010, F0111, F0000, EDL},
	{F0000, F0000, F0100, F1110, EDL},
	{F0000, F0000, F0010, F0111, EDL},
	{F1110, F0100, F0000, F0000, EDL},
	{F0111, F0010, F0000, F0000, EDL},
	{F0000, F1110, F0100, F0000, EDL},
	{F0000, F0111, F0010, F0000, EDL},
	{F0000, F0000, F1110, F0100, EDL},
	{F0000, F0000, F0111, F0010, EDL},
	{F1000, F1100, F1000, F0000, EDL},
	{F0100, F0110, F0100, F0000, EDL},
	{F0010, F0011, F0010, F0000, EDL},
	{F0000, F1000, F1100, F1000, EDL},
	{F0000, F0100, F0110, F0100, EDL},
	{F0000, F0010, F0011, F0010, EDL},
	{F0100, F1100, F0100, F0000, EDL},
	{F0010, F0110, F0010, F0000, EDL},
	{F0001, F0011, F0001, F0000, EDL},
	{F0000, F0100, F1100, F0100, EDL},
	{F0000, F0010, F0110, F0010, EDL},
	{F0000, F0001, F0011, F0001, EDL},
	{F1000, F1110, F0000, F0000, EDL},
	{F0100, F0111, F0000, F0000, EDL},
	{F0000, F1000, F1110, F0000, EDL},
	{F0000, F0100, F0111, F0000, EDL},
	{F0000, F0000, F1000, F1110, EDL},
	{F0000, F0000, F0100, F0111, EDL},
	{F1110, F1000, F0000, F0000, EDL},
	{F0111, F0100, F0000, F0000, EDL},
	{F0000, F1110, F1000, F0000, EDL},
	{F0000, F0111, F0100, F0000, EDL},
	{F0000, F0000, F1110, F1000, EDL},
	{F0000, F0000, F0111, F0100, EDL},
	{F0010, F1110, F0000, F0000, EDL},
	{F0001, F0111, F0000, F0000, EDL},
	{F0000, F0010, F1110, F0000, EDL},
	{F0000, F0001, F0111, F0000, EDL},
	{F0000, F0000, F0010, F1110, EDL},
	{F0000, F0000, F0001, F0111, EDL},
	{F1110, F0010, F0000, F0000, EDL},
	{F0111, F0001, F0000, F0000, EDL},
	{F0000, F1110, F0010, F0000, EDL},
	{F0000, F0111, F0001, F0000, EDL},
	{F0000, F0000, F1110, F0010, EDL},
	{F0000, F0000, F0111, F0001, EDL},
	{F0110, F1100, F0000, F0000, EDL},
	{F0011, F0110, F0000, F0000, EDL},
	{F0000, F0110, F1100, F0000, EDL},
	{F0000, F0011, F0110, F0000, EDL},
	{F0000, F0000, F0110, F1100, EDL},
	{F0000, F0000, F0011, F0110, EDL},
	{F1100, F0110, F0000, F0000, EDL},
	{F0110, F0011, F0000, F0000, EDL},
	{F0000, F1100, F0110, F0000, EDL},
	{F0000, F0110, F0011, F0000, EDL},
	{F0000, F0000, F1100, F0110, EDL},
	{F0000, F0000, F0110, F0011, EDL},
	{F1000, F1100, F0100, F0000, EDL},
	{F0100, F0110, F0010, F0000, EDL},
	{F0010, F0011, F0001, F0000, EDL},
	{F0000, F1000, F1100, F0100, EDL},
	{F0000, F0100, F0110, F0010, EDL},
	{F0000, F0010, F0011, F0001, EDL},
	{F0100, F1100, F1000, F0000, EDL},
	{F0010, F0110, F0100, F0000, EDL},
	{F0001, F0011, F0010, F0000, EDL},
	{F0000, F0100, F1100, F1000, EDL},
	{F0000, F0010, F0110, F0100, EDL},
	{F0000, F0001, F0011, F0010, EDL}};

#endif
