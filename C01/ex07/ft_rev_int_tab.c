void	ft_rev_int_tab(int *tab, int size)
{
	int	storage;
	int	left;

	left = 0;
	storage = 0;
	while (left < size)
	{
		storage = tab[left];
		tab[left] = tab[size - 1];
		tab[size - 1] = storage;
		left++;
		size--;
	}
}
