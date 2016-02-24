/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:02:10 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/23 18:40:38 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# define LET_TO_PLACE params->typearray[params->letter]
# define LETTER params->letter
# define NBPIECE params->nbpiece
# define SQR_SIZE params->sqrsize
# define X params->x
# define Y params->y

typedef struct	s_params
{
	int			letter;
	int			nbpiece;
	char		**sqr;
	int			*sqrsize;
	int			triescnt[27];
	int			*typearray;
	char		iswritable;
	int			x;
	int			y;
}				t_params;

void			arrange(int *tab);
void			error(int *tab);
int				fileclose(int fd);
int				filecomp(const char *str);
int				filegetfd(char *str);
int				*filetotab(int fd);
void			ft_putchar(char c);
void			ft_putendl(const char *str);
void			ft_putstr(const char *str);
int				ft_strcmp(const char *s1, const char *s2);
int				getid(int tabindex);
void			onestepback(t_params *params);
void			reinitcntrs(t_params *params);
void			resolve(t_params *params);
void			searchdot(char **sqr, int *coord, int *size, int i);
int				squareroot(int i);
char			**sqrinc(char **sqr, int *gridsize);
void			tabprint(char **sqr, int size);
char			**taballoc(int gridsize, int *index);

#endif
