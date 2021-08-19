//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = (char *)malloc(i + 1);
	c[i] = 0;
	c = src;
	return (c);
}

/*int	main(int argc, char *argv[])
{
	char	*s;

	(void)argc;
	s = ft_strdup(argv[1]);
	printf("%s", s);
	return (0);
}*/