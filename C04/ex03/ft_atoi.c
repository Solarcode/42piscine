int	is_space(char c)
{
	if (c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;
	int	i;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i])
	{
		if (is_space(str[i]))
		{
			i++;
		}
		else if (str[i] == '-')
		{

		}
	}
}
