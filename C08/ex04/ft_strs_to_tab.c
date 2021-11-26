#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*val;
	int			i;

	val = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!val)
		return (0);
	i = 0;
	while (i < ac)
	{
		val[i].size = ft_strlen(av[i]);
		val[i].str = (char *) malloc(val[i].size + 1);
		val[i].copy = (char *) malloc(val[i].size + 1);
		ft_strcpy(val[i].str, av[i]);
		ft_strcpy(val[i].copy, av[i]);
		++i;
	}
	val[i].str = 0;
	return (val);
}
