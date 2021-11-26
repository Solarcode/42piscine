#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	*temp;

	if (min >= max)
		return (0);
	ptr = (int *) malloc(4 * ((long long)max - min));
	if (!ptr)
		return (0);
	temp = ptr;
	while (min < max)
	{
		*(temp++) = min++;
	}
	return (ptr);
}
