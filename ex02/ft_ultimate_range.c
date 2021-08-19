//#include <stdio.h>
//#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*nb;

	i = max - min;
	if (i <= 0)
	{
		*range = ((void *)0);
		return (0);
	}
	nb = malloc(sizeof(int) * (i + 1));
	if (nb == (void *)0)
		return (-1);
	nb[i] = '\0';
	while (i-- >= -1)  
		nb[i] = min + i;
	*range = nb;
	return (max - min);
}

/*int	main(void)
{
	int	*range;
	int	a;
	int	i;

	i = 0;
	a = ft_ultimate_range(&range, 3, 9);
	printf("%d\n", a);
	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/