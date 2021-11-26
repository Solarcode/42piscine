unsigned int	ft_strlen5(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen5(dest);
	while (src[i] && nb > 0)
	{
		dest[len] = src[i];
		len++;
		i++;
		nb--;
	}
	dest[len] = 0;
	return (len);
}
