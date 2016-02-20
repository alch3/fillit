/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavadas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 18:24:13 by rcavadas          #+#    #+#             */
/*   Updated: 2016/02/20 19:25:11 by rcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_FILLIT_H
# define __FT_FILLIT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# define LET_TO_PLACE params.typearray[params.letter]
# define LETTER params.letter
# define NBPIECE params.nbpiece
# define SQR_SIZE params.sqr_size
# define X params.x
# define Y params.y

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

void					ft_arrange(int *tab);
void					ft_error(int *tab);
int						ft_fileclose(int fd);
int						ft_filecomp(const char *str);
int						ft_filegetfd(char *str);
int						*ft_filetotab(int fd);
int						ft_getid(int tabindex);
void					ft_putchar(char c);
void					ft_putnbr(int i);
void					ft_putstr(const char *str);
void					ft_putendl(const char *str);

//char					**ft_sqr_filler(int *tab, char **sqr, int *size);

int						ft_squareroot(int i);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strcpy(char *dest, const char *src);
char					*ft_strdup(const char *s1);
size_t					ft_strlen(const char *str);
char					**ft_sqrinc(char **sqr, int *gridsize);
void					ft_tabprint(char **sqr, int size);
char					**ft_taballoc(int gridsize, int *index);
void					ft_searchdot(char **sqr, int *coord, int *size, int i);

void					resolve(t_params params);



/*****************************/
void	ft_printstruct(t_params params);
/*****************************/
#endif
