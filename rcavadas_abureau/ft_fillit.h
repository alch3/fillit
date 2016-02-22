/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:24:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/22 12:59:19 by rcavadas         ###   ########.fr       */
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
# define SQR_SIZE params->sqr_size
# define X params->x
# define Y params->y

typedef struct			s_params
{
	int					letter;
	int					nbpiece;
	char				**sqr;
	int					*sqr_size;
	int					tries_cnt[27];
	int					*typearray;
	char				is_writable;
	int					x;
	int					y;
}						t_params;

void					arrange(int *tab);
void					error(int *tab);
int						fileclose(int fd);
int						filecomp(const char *str);
int						filegetfd(char *str);
int						*filetotab(int fd);
int						getid(int tabindex);
void					putchar(char c);
void					putnbr(int i);
void					putstr(const char *str);
void					putendl(const char *str);

//char					**sqr_filler(int *tab, char **sqr, int *size);

int						squareroot(int i);
int						strcmp(const char *s1, const char *s2);
char					*strcpy(char *dest, const char *src);
char					*strdup(const char *s1);
size_t					strlen(const char *str);
char					**sqrinc(char **sqr, int *gridsize);
void					tabprint(char **sqr, int size);
char					**taballoc(int gridsize, int *index);
void					searchdot(char **sqr, int *coord, int *size, int i);

void					resolve(t_params *params);



/*****************************/
void	printstruct(t_params params);
/*****************************/
#endif
