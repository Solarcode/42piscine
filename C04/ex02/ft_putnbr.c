#include <unistd.h>

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar1('-');
		ft_putnbr(214748364);
		ft_putchar1('8');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar1(nb % 10 + '0');
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar1(nb + '0');
	}
	else
	{
		ft_putchar1('-');
		ft_putnbr(-nb);
	}
}
