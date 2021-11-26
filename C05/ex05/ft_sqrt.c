int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb == 1)
	{
		return (1);
	}
	while (num <= 46340 && (num * num) <= nb)
	{
		if ((num * num) == nb)
		{
			return (num);
		}
		num++;
	}
	return (0);
}
