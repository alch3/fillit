/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:22:42 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/09 18:30:57 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_LIST_H
# define	FT_LIST_H

typedef struct				tetri_list
{
	unsigned int			id;
	char					*tetrimino;
	struct tetri_list		*next;
}							tetri_list;

unsigned int 				ft_check_id(unsigned int index);
void						ft_insertion(tetri_list **beginning, char *new_tetri, unsigned int new_id);
void						ft_push_back(tetri_list **beginning, char *new_tetri, unsigned int new_id);
tetri_list					ft_map_to_list();

#endif
