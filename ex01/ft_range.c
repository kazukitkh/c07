//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*nb;

	i = max - min;
	if (i <= 0)
		return ((void *)0);
	nb = (int *)malloc(i + 1);
	nb[i] = 0;
	while (i > 0)
	{
		i --;
		nb[i] = min + i;
	}
	return (nb);
}

/*int	main(void)
{
	int	*s;
	int	i;

	i = 0;
	s = ft_range(1, 8);
	while (s[i++])
		printf("%d", s[i - 1]);
	return (0);
}*/