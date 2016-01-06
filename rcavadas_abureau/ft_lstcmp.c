

#include "ft_fillit.h"

int	ft_lstcmp(t_list **begin, const char *str)
{
	t_list	*tmp;

	tmp = *begin;
	while (tmp->next)
	{
		ft_putnbr(ft_strcmp(tmp->tetrimino, str));
		ft_putchar('\n');
//		if (ft_strcmp(tmp->tetrimino, str) == 0)
//			return (tmp->type);
		tmp = tmp->next;
	}
	ft_putstr("error");
	exit(3);
	return (0);
}
