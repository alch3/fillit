/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:24:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/07 16:09:58 by rcavadas         ###   ########.fr       */
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

struct					s_list
{
	int					index;
	int					type;
	char				*tetrimino;
	struct s_list		*next;
};

void					ft_arrange(int *tab);
void					ft_error(int *tab);
int						ft_fileclose(int fd);
int						ft_filegetfd(char *str);
void					ft_putchar(char c);
void					ft_putnbr(int i);
void					ft_putstr(const char *str);
void					ft_putendl(const char *str);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s1);
size_t					ft_strlen(const char *str);
void					ft_validtolst(int fd, t_list **begin);


int					*ft_filetotab(int fd);
int					ft_getid(int tabindex);
int					ft_filecomp(const char *str);

#endif
