int	ft_is_prime2(int nb)
{
	long long	i;

	i = 5;
	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (!(nb % 2 && nb % 3))
		return (0);
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime2(i))
	{
		i++;
	}
	return (i);
}
