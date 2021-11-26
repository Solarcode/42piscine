void	ft_swaps(int *num1, int *num2)
{
	int	temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < (size - 1))
	{
		while (y < (size - x - 1))
		{
			if (tab[y] > tab[y + 1])
				ft_swaps(&tab[y], &tab[y + 1]);
			y++;
		}
		x++;
		y = 0;
	}
}
