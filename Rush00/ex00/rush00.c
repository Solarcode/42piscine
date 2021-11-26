extern	void	ft_putchar(char c);

void	edge00(int i, int j, int x, int y)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (j == 0 || j == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			edge00(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
