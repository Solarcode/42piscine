#include <unistd.h>

void	ft_putchar3(char c)
{
	write(1, &c, 1);
}

void	write_num(char j, char k, char l)
{
	ft_putchar3(j);
	ft_putchar3(k);
	ft_putchar3(l);
	if (j != '7')
	{
		ft_putchar3(',');
		ft_putchar3(' ');
	}
}

void	ft_print_comb(void)
{
	char	j;
	char	k;
	char	l;

	j = '0';
	k = '0';
	l = '0';
	while (j < '9')
	{
		while (k < '9')
		{
			while (l <= '9')
			{
				if ((j < k) && (k < l))
				{
					write_num(j, k, l);
				}
				l++;
			}
			k++;
			l = '0';
		}
		j++;
		k = '0';
	}
}
