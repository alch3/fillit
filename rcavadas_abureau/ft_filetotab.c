
#include "ft_fillit.h"

int	*ft_filetotab(int fd)
{
	char		buf[22];
	int			ret;
	int			index;
	int			*tab;
	int			nbchar;

	index = 0;
	nbchar = 0;
	tab = (int*)malloc(sizeof(int) * 27);
	while ((ret = read(fd, buf, 21)))
	{
		if (ret == 20)
		{
			buf[20] = '\n';
			buf[21] = '\0';
		}
		tab[index++] = ft_filecomp(buf);
		nbchar = nbchar + ret;
	if (tab[index - 1] == -1)
	  ft_error(tab);

		ft_putendl("tetrimino ok");

	}
	ft_fileclose(fd);
	if (nbchar % 21 == 0)
	  ft_error(tab);

	tab[index] = -1;
	return (tab);
}
