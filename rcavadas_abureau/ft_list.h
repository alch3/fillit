/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:22:42 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/08 16:48:46 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_LIST_H
# define	FT_LIST_H

typedef struct				tetriminos_list
{
	unsigned int			id;
	char					*tetrimino;
	struct tetriminos_list	*next;
}							tetriminos_list;

unsigned int 				ft_check_id(unsigned int index);
void			ft_insertion(tetriminos_list **begin_list, char *new_tetrimino, unsigned int new_id);
void			ft_push_back(tetriminos_list **begin_list, char *new_tetrimino, unsigned int new_id);
tetriminos_list ft_map_to_list();

#endif
