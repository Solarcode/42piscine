#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	rng;
	int	*temp;

	if (min >= max)
		return (0);
	rng = max - min;
	*range = (int *) malloc(sizeof(int) * rng);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (rng);
}
