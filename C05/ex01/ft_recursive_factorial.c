int	fact(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (fact(nb));
	}
}

int	fact(int nb)
{
	if (nb > 0)
	{
		return (nb * fact(nb - 1));
	}
	else
	{
		return (1);
	}
}
