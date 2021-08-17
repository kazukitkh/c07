#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;
	int		j;
	int		k;
	int		s;

	i = 0;
	k = 0;
	if (!size)
		return(c = (char*)malloc(0));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		k += j;
		i ++;
	}
	j = 0;
	while (sep[j])
		j++;
	k += j * (size - 1);
	c = (char*)malloc(k + 1);
	c[k] = '\0';
	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			c[s] = strs[i][j];
			j ++;
			s ++;
		}
		j = 0;
		while (sep[j] && s < k)
		{
			c[s] = sep[j];
			s ++;
			j ++;
		}
		i ++;
	}
	return (c);
}

int	main(int argc, char *argv[])
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
}