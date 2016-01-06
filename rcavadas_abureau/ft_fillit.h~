/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:24:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/01/06 16:05:07 by rcavadas         ###   ########.fr       */
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

void					ft_error(t_list **lst, int *tab);
t_list					*ft_lstnew(/*int i, const char *str*/);
int						ft_fileclose(int fd);
int						ft_filegetfd(char *str);
int						*ft_filetolst(int fd, t_list **begin);
void					ft_lstaddlast(t_list **element, int i, int j,
		const char *str);
int						ft_lstcmp(t_list **begin, const char *str);
size_t					ft_lstcount(t_list *element);
void					ft_lstdel(t_list **element);
void					ft_lstprint(t_list *element);
void					*ft_memset(void *b, int c, size_t len);
void					ft_putchar(char c);
void					ft_putnbr(int i);
void					ft_putstr(const char *str);
void					ft_putendl(const char *str);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s1);
size_t					ft_strlen(const char *str);
void					ft_validtolst(int fd, t_list **begin);
#endif














