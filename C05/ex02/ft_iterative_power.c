int	ft_iterative_power(int nb, int power)
{
	int	og;

	og = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (--power)
	{
		nb *= og;
	}
	return (nb);
}
