#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nb;

	i = max - min;
	if (i <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(nb = malloc(sizeof(int) * (i))))
		return (-1);
	while (--i >= 0)  
		nb[i] = min + i;
	*range = nb;
	return (max - min);
}

int	main(void)
{
	int	**range;
	int	a;
	int	i;

	i = 0;
	a = ft_ultimate_range(range, 3, 9);
	printf("%d", a);
	while (*range[i++])
		printf("%d", *range[i - 1]);
	return (0);
}