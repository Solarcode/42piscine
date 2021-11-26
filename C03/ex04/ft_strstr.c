int	ft_strlen4(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;
	int	j;

	len = ft_strlen4(to_find);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
			j++;
		else if ((str[i] != to_find[j]) && j != len)
			j = 0;
		if (j == len && len != 0)
			return (&str[i - len + 1]);
		i++;
	}
	return (0);
}
