
#include "ft_fillit.h"
#include "kappa.h"

int	ft_filecomp(const char *str)
{
    int	i;

    i = 0;
    while (i < 113)
      {
	if (ft_strcmp(g_valid[i], str) == 0)
	  return (ft_getid(i));
	i++;
      }
	return (-1);
}
