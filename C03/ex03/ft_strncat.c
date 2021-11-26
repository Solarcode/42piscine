int	ft_strlen1(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen1(dest);
	while (src[i] && nb > 0)
	{
		dest[len] = src[i];
		len++;
		i++;
		nb--;
	}
	dest[len] = 0;
	return (dest);
}
