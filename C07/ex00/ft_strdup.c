#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*dup;
	long long	len;

	len = 0;
	while (src[len])
		++len;
	dup = (char *) malloc(len + 1);
	dup[len] = 0;
	while (--len >= 0)
	{
		dup[len] = src[len];
	}
	return (dup);
}
