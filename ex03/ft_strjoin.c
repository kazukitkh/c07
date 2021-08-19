//#include <stdlib.h>
//#include <stdio.h>
void	ft_help_strjoin(char **strs, char *sep, int *n, char *c)
{
	n[0] = 0;
	n[3] = 0;
	while (n[0] < n[4])
	{
		n[2] = 0;
		while (strs[n[0]][n[2]])
		{
			c[n[3]] = strs[n[0]][n[2]];
			n[2]++;
			n[3]++;
		}
		n[2] = 0;
		while (sep[n[2]] && n[3] < n[1])
		{
			c[n[3]] = sep[n[2]];
			n[3]++;
			n[2]++;
		}
		n[0]++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		n[5];

	n[0] = 0;
	n[1] = 0;
	n[4] = size;
	if (!size)
		return(c = (char*)malloc(0));
	while (n[0] < size)
	{
		n[2] = 0;
		while (strs[n[0]][n[2]])
			n[2]++;
		n[1] += n[2];
		n[0] ++;
	}
	n[2] = 0;
	while (sep[n[2]])
		n[2]++;
	n[1] += n[2] * (size - 1);
	c = (char*)malloc(n[1] + 1);
	c[n[1]] = '\0';
	ft_help_strjoin(strs, sep, n, c);
	return (c);
}

/*int	main(int argc, char *argv[])
{
	char	*c[argc - 2];
	int		i;

	i = 0;
	while (i < argc - 2)
	{
		c[i] = argv[i + 2];
		i ++;
	}
	printf("%s", ft_strjoin(argc - 2, c, argv[1]));
	return (0);
}*/