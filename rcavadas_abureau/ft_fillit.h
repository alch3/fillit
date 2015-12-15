/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:24:13 by rcavadas          #+#    #+#             */
/*   Updated: 2015/12/15 23:37:34 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_FILLIT_H
# define __FT_FILLIT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_list	t_list;
typedef struct s_list	*t_lstptr;

struct					s_list
{
	int					index;
	char				*tetrimino;
	struct s_list		*next;
};

t_lstptr				ft_lstaddfirst(t_lstptr element, int i, char *str);
t_lstptr				ft_lstaddlast(t_lstptr element, int i, char *str);
size_t					ft_lstcount(t_lstptr element);
void					ft_lstdel(t_lstptr element);
void					ft_lstprint(t_lstptr element);
void					ft_putchar(char c);
void					ft_putnbr(int i);
void					ft_putstr(const char *str);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s1);
size_t					ft_strlen(const char *str);
#endif
