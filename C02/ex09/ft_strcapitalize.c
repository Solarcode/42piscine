int	number(char ltr)
{
	if (ltr >= '0' && ltr <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	uppercase(char ltr)
{
	if (ltr >= 'A' && ltr <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	lowercase(char ltr)
{
	if (ltr >= 'a' && ltr <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	part_of_word(char ltr)
{
	if (number(ltr))
	{
		return (1);
	}
	else if (uppercase(ltr))
	{
		return (1);
	}
	else if (lowercase(ltr))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_ltr;

	first_ltr = 1;
	i = 0;
	while (str[i])
	{
		if (!part_of_word(str[i]))
			first_ltr = 1;
		else
		{
			if (first_ltr && lowercase(str[i]))
				str[i] -= 32;
			else if (!first_ltr && uppercase(str[i]) && !number(str[i]))
				str[i] += 32;
			first_ltr = 0;
		}
		i++;
	}
	return (str);
}
