#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	print_nums(int num_a, int num_b)
{
	char	digit_a1;
	char	digit_b1;
	int		check_a;
	int		check_b;

	check_a = num_a;
	check_b = num_b;
	digit_a1 = num_a / 10;
	digit_b1 = num_b / 10;
	ft_putchar2(digit_a1 + '0');
	ft_putchar2((num_a % 10) + '0');
	ft_putchar2(' ');
	ft_putchar2(digit_b1 + '0');
	ft_putchar2((num_b % 10) + '0');
	if (!((check_a == 98) && (check_b == 99)))
	{
		ft_putchar2(',');
		ft_putchar2(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num_a;
	int	num_b;

	num_a = 0;
	num_b = 0;
	while (num_a <= 99)
	{
		while (num_b <= 99)
		{
			if (num_a < num_b)
			{
				print_nums(num_a, num_b);
			}
			num_b++;
		}	
		num_b = 0;
		num_a++;
	}
}
