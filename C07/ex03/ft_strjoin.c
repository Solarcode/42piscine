#include <stdlib.h>

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

int	ft_strlen(char *src)
{
	long long	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*arr;
	char		*temp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		arr = ((char *) malloc(1));
		arr[0] = 0;
		return (arr);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	arr = (char *) malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcat(arr, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (arr);
}
